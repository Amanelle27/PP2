set1 = {"a", "b", "c"}
set2 = {1, 2, 3}
set3 = {"John", "Elena"}
set4 = {"apple", "bananas", "cherry"}
myset = set1.union(set2, set3, set4) #to join sets into one
print(myset)

myset2 = set1 | set2 | set3 |set4  #we can use | instead of union
print(myset)

x = {"a", "b", "c"}
y = (1, 2, 3)
z = x.union(y) #we can join set and a tuple
print(z)

set1.update(set2) #update() will insert elements from set2 to set1
print(set1)

set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.intersection(set2) #will keep only the common elements
print(set3)

set3 = set1 & set2 # '&' is the same as intersection
print(set3)

set1.intersection_update(set2) #will also keep only dublicates but in the original set1 without a new one
print(set1)

set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.difference(set2) #will keep only the elements from set1 that are not present in set2
print(set3)

set3 = set1 - set2 # '-' does the same as difference()
print(set3)

set1.difference_update(set2) #does the same as difference() but keeps it in the set1
print(set1)

set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.symmetric_difference(set2) #keeps all the elements but duplicates 
print(set3)

set3 = set1 ^ set2 #does the same as the symmetric_difference()
print(set3)

set1.symmetric_difference_update(set2) #does the same as the symmetric_difference() but keeps in set1
print(set1)