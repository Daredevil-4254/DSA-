
# Write a program that take a user input of three angles and will find out whether 
# it can form a triangle or not.
p =int(input("Enter the first angle "))
q=int(input("Enter the second angle "))
r=int(input("Enter the third angle "))

if (p+q+r)==180:
    print("Formed a triangle!!")

else:
    print('Trianlge cannot be formed!!')