# 5!=5x4x3x2x1==1x2x3x4x5
# input n ---> a=1 --->for i (n,0,-1) --->a=a*i 

n=int(input("Find Factorial! : ")) 

a=1
for i in range (n,0,-1):
    a*=i 
 
print (a)







