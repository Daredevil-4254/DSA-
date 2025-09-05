# Print all the Armstrong numbers in a given range.
#Armstrong number is a number that is equal to the sum of cubes of its digits
#For example 0, 1, 153, 370, 371 and 407 are the Armstrong no.
# 153==1^3+5^3+3^3==1+125+27-->
start=int (input("enter the starting number : "))
end=int (input("enter the ending number : "))
    armst=
for number in range(start,end+1):
    length=len(str(number))
    digit=number%10
    armst+=(digit**length)

if armst==number:
    print("Armstrong numbers are :",armst)

    
    


