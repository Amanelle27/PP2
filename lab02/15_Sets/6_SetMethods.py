fruits = {"apple", "banana", "cherry"}
fruits.add("orange") #adds an element to the set
print(fruits)

fruits = {"apple", "banana", "cherry"}
fruits.discard("banana") #removes the banana from the set
print(fruits)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "facebook"}
z = x.isdisjoint(y) #Returns whether two sets have a intersection or not
print(z)

x = {"a", "b", "c"}
y = {"f", "e", "d", "c", "b", "a"}
z = x.issubset(y) #Returns whether another set contains this set or not
print(z)          #the function can be written as "<=" as well

z = x.issuperset(y) #Returns whether this set contains another set or not
print(z)            #the function can be written as ">=" as well