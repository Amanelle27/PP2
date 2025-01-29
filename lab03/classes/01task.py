class Strings01:
    def __innit__(self):
        self.inputStr = ""
    def getString(self):
        self.inputStr = input()
    def printString(self):
        print(self.inputStr.upper())

test = Strings01()
test.getString()
test.printString()