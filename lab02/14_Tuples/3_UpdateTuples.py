#in order to somehow change a tuple
#we have to "convert" it to a list make changes and then "convert" it back

x = ("apple", "banana", "cherry")
y = list(x)
y[1] = "kiwi"
x = tuple(y)
print(x)

#WE CAN ADD UP TUPLES 🤯    
thistuple = ("apple", "banana", "cherry")
y = ("orange",)
thistuple += y
print(thistuple)

thistuple = ("apple", "banana", "cherry")
del thistuple #deletes the tuple