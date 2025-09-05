# USING LOOPS:

s = input("Enter a string: ")
reversed_s = ""
for char in s:
    reversed_s = char + reversed_s  
print("Reversed String:", reversed_s)


# USING SLICING:
# s = input("Enter a string: ")  # Take input
# reversed_s = s[::-1]  # Reverse the string
# print("Reversed String:", reversed_s)

#USING  reversed() and join() :
# s = input("Enter a string: ")
# reversed_s = ''.join(reversed(s))  # Convert reversed object to string
# print("Reversed String:", reversed_s)
# s = input("Enter a string: ")
# stack = list(s)  # Convert string to list
# reversed_s = ''.join(stack[::-1])  # Reverse the list and join back
# print("Reversed String:", reversed_s)

