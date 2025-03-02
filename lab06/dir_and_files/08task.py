import os 

path = r"C:\Users\user\Desktop\PP2\lab06\dir_and_files\todelete.txt"

if os.access(path, os.F_OK):
    os.remove(path)