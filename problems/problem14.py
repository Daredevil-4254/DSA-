# Write a program, which will find all such numbers between 1000
# and 3000 (both included) such that each digit of the number is an
# even number. The numbers obtained should be printed in a space-separated
# sequence on a single line.



even_list = []

for num in range(1000, 3001):  # Iterate from 1000 to 3000 (inclusive)
    temp = num  # Store the original number
    all_even = True  # Flag to check if all digits are even
    
    while temp > 0:
        digit = temp % 10  # Get last digit
        if digit % 2 != 0:  # If any digit is odd, break
            all_even = False
            break
        temp //= 10  # Remove last digit
    
    if all_even:  # Only add numbers where all digits are even
        even_list.append(num)

print(even_list)  # Print the final list

