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

def real_time_monitoring():
    cmd = 'atop'
    os.system(cmd)

def check_memory():
    cmd = 'atop -m'
    os.system(cmd)

def show_all_active_process():
    cmd = 'atop -a'
    os.system(cmd)

def show_disk_usage():
    cmd = 'atop -d'
    os.system(cmd) 

def show_all_background_process():
    cmd = 'atop -c'
    os.system(cmd)

def processes_per_user():
    cmd = 'atop -au'
    os.system(cmd)

def get_device_ip():
    cmd = "ifconfig | grep 'broadcast' | awk '{print $2}'"
    os.system(cmd)

def stats_physical_memory():
    cmd = "free -m | grep 'Mem' | awk '{print  \"Physical Memory Stats in MB: \", \"Total:\", $2,  \"Used:\", $3,\"Free:\", $4, \"Shared:\", $5,\"Buff/Cache:\", $6, \"Available:\", $7}'"
    os.system(cmd)

def stats_swap_memory():
    cmd = "free -m | grep 'Swap' | awk '{print  \"Swap Memory Stats in MB: \", \"Total:\", $2,  \"Used:\", $3,\"Free:\", $4, \"Shared:\", $5,\"Buff/Cache:\", $6, \"Available:\", $7}'"
    os.system(cmd)

def stats_RAM():
    cmd = "lscpu"
    os.system(cmd)


if __name__ == "__main__":
    menu_options = ["List all Running Process", "Get Kernel Name", "Get Kernel Version", \
        "Tell me current time", "Tell me today's date", "Get current TImestamp", \
        "Real time Linux Monitoring", "Real time Disk Utilization", "Real time Memory Consumption", "Show all active processes", "Show all background processes", "Number of processes per user", \
        "Get device IP", \
        "Get Physical Memory Stats", "Get Swap Memory Stats", "Show RAM Stats"]

    while(True):
        print("___________________________________________________________")
        print("Choose option: ")
        for i in range(len(menu_options)):
            print(str(i+1) + ".", menu_options[i])
        print("q. Quit")
        print("___________________________________________________________")
        user_input = input('>')
        
        if (user_input == "1"):
            get_all_running_processes()
        
        elif (user_input == "2"):
            get_kernal_name()
        elif (user_input == "3"):
            get_kernal_version()
        
        elif (user_input == "4"):
            get_time()
        elif (user_input == "5"):
            get_date()
        elif(user_input == "6"):        
            get_timestamp()

        elif (user_input == "7"):
            real_time_monitoring()
        elif (user_input == "8"):
            show_disk_usage()
        elif (user_input == "9"):
            check_memory()
        elif (user_input == "10"):
            show_all_active_process()
        elif (user_input == "11"):
            show_all_background_process()
        elif (user_input == "12"):
            processes_per_user()

        elif (user_input == "13"):
            get_device_ip()

        elif (user_input == "14"):
            stats_physical_memory()
        elif (user_input == "15"):
            stats_swap_memory()
        elif (user_input == "16"):
            stats_RAM()

        elif(user_input == "q"):
            break
        else:
            print("Wrong Input :(")
            print("Try Again!")
        