def isItPalindrome(inpt):
    if len(inpt) == 1:
        word = inpt[0]
        for x in word:
            inpt.append(x)
        inpt.pop(0)

    inptCopy = inpt[:]
    inpt.reverse()
    if inptCopy == inpt:
        return True
    else:
        return False

snt = list(input("Enter a word or a phrase: ").split())
if isItPalindrome(snt):
    print("It is a palindrome")
else:
    print("It isn't a palindrome")
    