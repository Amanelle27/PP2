import math
def spheresVolume(r):
    res = float((4/3)*math.pi*pow(r, 3))
    return res

radius = int(input("Enter a radius: "))
print(spheresVolume(radius))