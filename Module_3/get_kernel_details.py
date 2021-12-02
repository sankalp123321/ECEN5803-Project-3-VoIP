import os
import platform
import time

#print('Uname:', platform.uname())
##print('Distribution :', platform.linux_distribution())
#print('Machine :', platform.machine())
#print('Node :', platform.node())
#print('Processor :', platform.processor())
#print('Release :', platform.release())
#print('System :', platform.system())
#print('Version :', platform.version())
#print('Platform :', platform.platform())


def get_all_running_processes():
    cmd = 'ps aux'
    os.system(cmd)

def kill_process(pid:int):
    cmd = 'kill -9 ' + str(pid)
    os.system(cmd)

def get_kernal_name():
    cmd = 'uname --kernel-name'
    os.system(cmd)

def get_kernal_version():
    cmd = 'uname --kernel-version'
    os.system(cmd)

def get_timestamp():
    print("Timestamp: ", time.time())

def get_date():
    lt = time.localtime(time.time())
    current_date = str(lt.tm_mon) + "/" +  str(lt.tm_mday) + "/" +str(lt.tm_year)
    print("Date in MM/DD/YYYY format ", current_date)

def get_time():
    lt = time.localtime(time.time())
    current_time = str(lt.tm_hour) + ":" + str(lt.tm_min) + ":" + str(lt.tm_sec)
    print("Time in HH:MM:SS format ", current_time)

if __name__ == "__main__":

    while(True):
        print("Choose option: ")
        print("1. List all Running Process")
        print("2. Get Kernel Details")
        print("3. Tell me current time")
        print("4. Tell me today's date")
        print("5. Get current TImestamp")
        user_input = input('>')

        if (user_input == "1"):
            get_all_running_processes()
        elif (user_input == "2"):
            get_kernal_name()
            get_kernal_version()
        elif (user_input == "3"):
            get_time()
        elif (user_input == "4"):
            get_date()
        elif(user_input == "5"):        
            get_timestamp()
        else:
            print("Wrong Input :(")
            print("Try Again!")
        