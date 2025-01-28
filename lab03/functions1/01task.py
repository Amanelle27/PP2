def gramsToOunces(grams):
    ounces = 28.3495231 * grams
    return ounces

recipe = float(input())
print(gramsToOunces(recipe))