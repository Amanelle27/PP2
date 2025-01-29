class Shape:
    def __init__(self):
        self.area = 0
    def findArea(self):
        return self.area
    
class Rectangle(Shape):
    def __init__(self, length, width):
        super().__init__()
        self.length = length
        self.width = width
    def findArea(self):
        self.area = self.length * self.width
        return self.area

# Let's test an area method
a = int(input("Enter length: "))
b = int(input("Enter width: "))
reck = Rectangle(a, b)
print("Default Area:", reck.area)
reck.findArea()
print("Calculated Area:", reck.area)