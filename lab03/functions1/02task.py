def fahrenheitToCelsius(f):
    c = (5 / 9) * (f - 32)
    return c

f = float(input("Enter Fahrenheits: "))
print("It's", fahrenheitToCelsius(f), "celsius")