 #Write a program that will tell the number of dogs and chicken are there when the user will
 # provide the value of total heads and legs.
# For example: Input: heads -> 4 legs -> 12
# Output: dogs -> 2 chicken -> 2
# Write your code here
heads = int(input("Enter total heads: "))
legs = int(input("Enter total heads: "))
# c + d =h ---> c = h-d
# l = 4xd + 2xc
for dogs in range(heads + 1):#using dogs in range of heads instead of chickens 
                     #in range of heads because its more efficient as 1dog=4legs
    chickens = heads - dogs
    if (dogs * 4 + chickens * 2) == legs:
        print(f"dogs ---> {dogs}, chicken ---> {chickens}")
        break
else:
    print("No valid solution. Please check the input values.")