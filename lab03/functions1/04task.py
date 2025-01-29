def isXprime(x):
    if x < 2:
        return False
    for i in range(1, x):
        if i != 1 and x%i == 0:
            return False
    return True

def filter_prime(inputList):
    resList = []
    for x in inputList:
        if isXprime(int(x)):
            resList.append(x)
    return resList

listIn = list(input().split())
print(filter_prime(listIn))

