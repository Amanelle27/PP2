from task13 import game

print("Do you wanna play a game? yes/no")
answ = input()
if answ == "yes":
    game()
else:
    print("I don't care actually, you have to play anyways")
    game()
