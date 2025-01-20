thislist = ["apple", "banana", "cherry"]
thislist.append("orange") #same as pushback
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical) # will add tropical to the end of thislist
thistuple = ("kiwi", "orange")
thislist.extend(thistuple) #can add other iterable objects as well
print(thislist)