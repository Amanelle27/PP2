thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort() #works just like sort() in c++
print(thislist)

thislist.sort(reverse = True)
print(thislist)

def myFun(n):       #comparator that sorts by its closure to 50 
    return abs(n-50)
thislist = [27, 48, 6, 11]
thislist.sort(key = myFun)

#.sort() is case sensitive, upper case goes before the lower one
thislist = ["banana", "Orange", "Kiwi", "cherry"]
thislist.sort(key = str.lower)
print(thislist)

#reverse() works just like reverse in c++
thislist.reverse()
print(thislist)