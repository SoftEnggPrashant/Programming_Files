from subprocess import *

data = check_output(['netsh', 'wlan', 'show', 'profiles']).decode('utf-8').split('\n')

profiles = [i.split(":")[1][1:-1] for i in data if "All User Profile" in i]

for i in profiles:
    password= check_output(['netsh', 'wlan', 'show', 'profile', i,'key=clear']).decode('utf-8').split('\n')
    password = [b.split(":")[1][1:-1] for b in password if "Key Content" in b]
    try:
        print ("{:<30}|  {:<}".format(i, password[0]))
    except IndexError:
        print ("{:<30}|  {:<}".format(i, ""))
