from flask import Flask, render_template
from flask_serial import Serial
from flask_socketio import SocketIO
from flask_bootstrap import Bootstrap
import json
from flask import request

from morse_chart import ascii_to_morse, morse_to_ascii
from messages import active_users, messages_box, users_list
from utils import *




app = Flask(__name__)
app.config['SERIAL_TIMEOUT'] = 1
app.config['SERIAL_PORT'] = '/dev/ttyS9'
app.config['SERIAL_BAUDRATE'] = 115200
app.config['SERIAL_BYTESIZE'] = 8
app.config['SERIAL_PARITY'] = 'N'
app.config['SERIAL_STOPBITS'] = 1

ser = Serial(app)
socketio = SocketIO(app)
bootstrap = Bootstrap(app)

@app.route('/')
def hello_world():
    name = 'Rosalia'
    return render_template('index.html', title='Welcome', username=name, user_names = [])

@app.route('/text2morse',methods=['GET', 'POST'])
def text2morse():
    result = ''
    if request.method == "POST":
        text_msg =  request.form['text2morse'] #request.args["text2morse"]
        text_msg = text_msg.upper()   
        result = ""
        for ch in text_msg:
            if ch in ascii_to_morse:
                result += ascii_to_morse[ch] + "?"
        
        print(text_msg, " : ", result) 
    return render_template('index.html', title='Welcome', username='Rosalia', morse_string = result, user_str = text_msg)

@app.route('/morse2text',methods=['GET', 'POST'])
def morse2text():
    result = ''
    if request.method == "POST":
        text_msg =  request.form['morse2text'] #request.args["morse2text"] 
        text_msg1 = text_msg
        text_msg = text_msg.replace('?', ' ')
        
        text_msg = replace_dots_dashes(text_msg)
        result = ""
        words_in_text = text_msg.split('/')
        for word in words_in_text:
            chars = word.split(' ')
            for ch in chars:
                if ch in morse_to_ascii:
                    result += morse_to_ascii[ch]
       
    print(text_msg, " : ", result) 
    return render_template('index.html', title='Welcome', username='Rosalia', text_string = result, mrs_str = text_msg1)

@app.route('/username',methods=['POST'])
def capture_username():
    if request.method == "POST":
        user_name = request.form['username']
        print("#########################################", user_name)
        if user_name not in list(users_list):
            update_dict(users_list, user_name)

        if user_name not in active_users.keys():
            update_dict(active_users, user_name)
        users =  list(active_users.keys()) 
        users_to_show = []
        for user in users:
            if user != user_name:
                users_to_show.append(user)
    return render_template('index.html', title='Welcome', username='Rosalia', user_names = users_to_show)

@app.route('/sendmessage',methods=['GET'])
def send_message():
    if request.method == "POST":
        user_name = request.form['username']
        print(request.form)
        
    return render_template('index.html', title='Welcome', username='Rosalia', user_names = users_to_show)


@ser.on_message()
def handle_message(msg):
    print("\r\n\nreceive a message:\r\n\n", msg)    
    socketio.emit("serial_message", data={"message":str(msg)})

@socketio.on('send')
def handle_send(json_str):
    data = json.loads(json_str)
    ser.on_send(data['message'])
    print("send to serial: %s"%data['message'])

@ser.on_log()
def handle_logging(level, info):
    print(level, info)


if __name__ == '__main__':
    
    #app.run(host="0.0.0.0")
    

    socketio.run(app, debug=False, host="0.0.0.0")