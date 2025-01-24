a = ["happy", "birthday"]
a.append("sara") #adds sara to the end of the list
print(a)

a.clear() #clears the list
print(a) 

a = ['billiard', 'bowling']
b = a.copy() #copies the a list
print(b)

a.extend(b) #adds elements of b to the end of the a list
print(a)

print(a.index('bowling')) #returns an index of the specific element

a.insert(0, 'studying') #inserts an element to the specific index
print(a)

a.pop() #deletes the last element or the one with index written in the brackets
print(a)

a.remove("studying") #removes the element with value given in the brackets
print(a)

a.reverse() #reverses the list
print(a)

a.sort() #sorts the list
print(a)