#A backslash followed by three integers will result in a octal value:
txt = "\110\145\154\154\157"
#A backslash followed by an 'x' and a hex number represents a hex value:
txt = "\x48\x65\x6c\x6c\x6f"
print(txt) 
print(txt) 
print("We\'ve known each other for so long") # \' gives a single quote
print("Your heart\'s been aching, but you\'re too shy to say it \\") # \\ gives a single backslash  
print("Inside, we both know what\'s been going on\nWe know the game and we're gonna play it") # \n is a new line
print("And if you ask me how I\'m feeling\rDon't tell me you\'re too blind to see") # \r Carriage Return
print("Never gonna give you\tup") # \t is a tab
print("Never gonna let you  \bdown") # \b is a backspace
print("Never gonna run around and desert you\f") # \b 	Form Feed