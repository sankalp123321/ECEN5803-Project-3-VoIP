1. sudo apt-get install xterm
2. mkdir -p ~/.config/autostart 
3. sudo nano ~/.config/autostart/lxterm-autostart.desktop

[Desktop Entry]
Encoding=UTF-8
Name=Terminal autostart
Comment=Start a terminal and list directory
Exec=lxterminal -e 'python3 /home/pi/ECEN5803-Project-3-VoIP/Module_3/get_kernel_details.py'
