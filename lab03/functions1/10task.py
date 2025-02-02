def uniqueList(listIn):
    resList = []
    for x in listIn:
        if x in resList:
            continue
        else:
            resList.append(x)
    return resList

listIn = list(input("Enter list's elements separated by spaces: ").split())
print("No dublicates version: ", *uniqueList(listIn))