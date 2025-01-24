fruits = ("apple", "banana", "cherry")
(green, yellow, red) = fruits #we can extract values from a tuple straight into variables
print(green)
print(yellow)
print(red)

#we use asterisk to collect the extra elements into a list
fruits = ("apple", "banana", "cherry", "strawberry", "raspberry")
(green, yellow, *red) = fruits
print(green)
print(yellow)
print(red)