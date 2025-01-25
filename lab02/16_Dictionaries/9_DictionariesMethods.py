x = ('key1', 'key2', 'key3')
y = 0
thisdict = dict.fromkeys(x, y) #Creates a dictionary with 3 keys, all with the value 0
print(thisdict)

car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.setdefault("model", "Bronco")
print(x)