#sets are unordered, unchangeable*, and unindexed
#set items are unchangeable, but you can remove items and add new items
#unordered means that order is not fixed and it can occur unpredictably
#duplicates are ignored
#we can combine different types as well

thisset = {"apple", "banana", "cherry"}
print(thisset)

print(len(thisset)) #returns length of the set

print(type(thisset)) #returns type of the set

thisset = set(("apple", "banana", "cherry")) # note the double round-brackets
print(thisset)