import math as m

x1=float(input("enter the first x coordinate :"))
x2=float(input("enter the second x coordinate :"))
y1=float(input("enter the first y coordinate :"))
y2=float(input("enter the second y coordinate :"))

euclid=m.sqrt((y2-y1)**2 + (x2-x1)**2)

print (" The Euclidean Distance between","(",x1,",",y1 ,")", "and ", "(", x2, ",",y2,")" , "is : ",euclid)