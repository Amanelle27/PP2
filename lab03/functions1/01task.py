def gramsToOunces(grams):
    ounces = 28.3495231 * grams
    return ounces

recipe = float(input("Enter grams: "))
print("It's", gramsToOunces(recipe), "ounces")