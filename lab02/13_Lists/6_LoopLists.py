thislist = ["apple", "banana", "cherry"] 
for x in thislist:  #the for loop
  print(x)

for i in range(len(thislist)):
  print(thislist[i])    #itearing by indexes

i = 0
while i < len(thislist):    #the while loop
  print(thislist[i])
  i += 1

[print(x) for x in thislist]    #short hand for loop