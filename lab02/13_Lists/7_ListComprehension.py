fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
    if 'a' in x:
        newlist.append(x)

print(newlist)


#the shorter method
newlist2 = [x for x in fruits if 'a' in x]
#the syntax: newlist = [expression for item in iterable if condition == True]
print(newlist2)


newlist3 = [x for x in range(10) if x < 5]
#will look like [0, 1, 2, 3, 4]
print(newlist3)


newlist4 = [x.upper() for x in fruits]
print(newlist4)


newlist5 = ['hey' for x in fruits]
print(newlist5)


newlist6 = [x if x != 'banana' else 'orange' for x in fruits]