def howManyRabbitsAndChickens(heads, legs):
    rabs = int((legs - (heads * 2))/2)
    chks = int(heads - rabs)
    print("It's", rabs, "rabbits", "and", chks, "chickens")

h = int(input("Heads: "))
l = int(input("Legs: "))
howManyRabbitsAndChickens(h, l)
