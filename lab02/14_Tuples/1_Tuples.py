thistuple = ("apple", "banana", "cherry", "apple", "cherry") #tuples allow dublicates
print(thistuple)

#TUPLES ARE UNCHANGEBLE and ordered

print(len(thistuple)) #prints the tuple's length

mytuple = ("coca-cola",) #to create a one-element tuple we have to write comma ','
print(mytuple)

tuple1 = ("abc", 34, True, 40, "male") #we can combine several types
print(tuple1)

print(type(mytuple)) #returns the tuple's type

#tuple() constructor to make a tuple
thistuple = tuple(("apple", "banana", "cherry")) # note the double round-brackets
print(thistuple)