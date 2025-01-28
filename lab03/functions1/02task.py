def fahrenheitToCelsius(f):
    c = (5 - 9) * (f - 32)
    return c

f = float(input())
print(fahrenheitToCelsius(f))