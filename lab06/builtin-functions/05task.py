mylist = []

num = int(input("Enter a number: "))

for i in range(0, num):
    ourbool = input("Enter True/False: ")
    mylist.append(ourbool)

mytuple = tuple(mylist)

res = True
for element in mytuple:
    if element == "False":
        res = False
        break

if res: print("You are very truthful")
else: print("Lie Lie Lie")