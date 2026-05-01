# Write a program that keeps on accepting a number from the user 
# until the user enters Zero. Display the
#  sum and average of all the numbers.

count = 0
sum_result = 0  
n = -1 

print("Enter 0 to exit")

while n != 0:  
    n = int(input("Enter the number: "))  

    if n == 0:  
        break

    sum_result += n  
    count += 1  


if count > 0:
    average = sum_result / count
    print("Sum =", sum_result)
    print("Average =", average)
else:
    print("No numbers were entered.")
   
