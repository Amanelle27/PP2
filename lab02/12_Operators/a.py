a, b = 29, 10
print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a % b)
print(a ** b) #exponential functrion, a^b
print(a // b) #floor division (integer division)


a += b
a -= b
a *= b
a /= b
a //= b
a **= b
a &= b # a and b (bitwise operation)
a |= b # a or b (bitwise operation)
a ^= b # a xor b (bitwise operation)
a >>= b # shift to the right side by b positions
a <<= b # shift to the left side by b positions
print(x := 3) # same as x = 3; print(x)


#logical operators

if a > 5 and b > 5: # and is same as &&
    print ("both are more than 5:", a, b)
elif a > 5 or b > 5: # or is the same as ||
    print ("one is more than 5:", a, b)
elif not(a > 5 and b > 5): # !( && )
    print ("none of them are more than 5:", a, b)
if (a is b): # is is the same as == and is not is the same as !=
    print(a, '+', b)

x = ["apple", "banana"]
print("banana" in x) # returns True because a sequence with the value "banana" is in the list

x = ["apple", "banana"]
print("pineapple" not in x) # returns True because a sequence with the value "pineapple" is not in the list

