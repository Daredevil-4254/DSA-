# Given the height, width and breadth of a milk tank, you have to find out how many glasses of milk can be obtained?
#  Assume all the inputs are provided by the user.
# Write your code here
import math as m
height=int(input("Enter the height :"))
length=int(input("Enter the length :"))
breadth=int(input("Enter the breadth :"))
volm=height*length*breadth
glass_height=int(input("Enter the height of glass :"))
glass_radius=int(input("Enter the radius of glass :"))
glass_volm=m.pi*glass_height*(glass_radius**2)
no_of_glass=m.floor(volm/glass_volm)
print("Number of glasses required is : ",no_of_glass)