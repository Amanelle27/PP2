#list2 = list1 will just create a reference
thislist = ["apple", "banana", "cherry"]
newlist = thislist.copy()
print(newlist)

newlist2 = list(thislist)
print(newlist2)

newlist3 = thislist[:]
print(newlist3)