thisset = {"apple", "banana", "cherry"}
thisset.remove("banana") #will raise an error if the item is not in the set
print(thisset)

thisset = {"apple", "banana", "cherry"}
thisset.discard("banana") #wont raise an error
print(thisset)

thisset = {"apple", "banana", "cherry"}
x = thisset.pop() #removes a random element
print(x)
print(thisset)

thisset = {"apple", "banana", "cherry"}
thisset.clear() #clears the set
print(thisset)

del thisset #deletes the whole set