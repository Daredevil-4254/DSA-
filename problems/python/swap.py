a=int(input("Enter the first no. :"))
b=int(input("Enter the second no. :"))

# one line swap in python : x,y= y,x
print("Before swapping: a =", a, "b =", b)

a = a + b
b = a - b
a = a - b

print("After swapping: a =", a, "b =", b)
