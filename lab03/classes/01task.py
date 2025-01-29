class Strings01:
    def __init__(self):
        self.inputStr = ""
    def getString(self):
        self.inputStr = input()
    def printString(self):
        print(self.inputStr.upper())

test = Strings01()
test.getString() #String01.getString(test)
test.printString()
print(test.inputStr)

