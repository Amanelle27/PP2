import os 

path = r'C:\Users\user\Desktop\PP2\lab06\dir_and_files\alphabet'


for letter in range(65, 91):
    with open((path+'\\'+chr(letter)+'.txt'), 'w') as file:
        pass