# A robot moves in a plane starting from the original point (0,0). 
# The robot can move toward UP, DOWN, 
# LEFT and RIGHT with a given steps.
# The trace of robot movement is shown as the following:

# UP 5
# DOWN 3
# LEFT 3
# RIGHT 2
# !
# The numbers after the direction are steps.

# ! means robot stop there.

# Please write a program to compute the distance from current position 
# after a sequence of movement and original point.

# If the distance is a float, then just print the nearest integer.

# Example:

# Input:

# UP 5
# DOWN 3
# LEFT 3
# RIGHT 2
# !
# Output:2

import math 
movement=["UP 5",
 "DOWN 3",
 "LEFT 3",
 "RIGHT 2"
 ,"!"]
print ("movement :",movement)
x,y=0,0
for move in movement:
    if move=="!":
        break
    parts = move.split()
    direction = parts[0]
    steps = int(parts[1])
    if direction=="UP":
        y+=steps
    if direction=="DOWN":
        y-=steps
    if direction=="RIGHT":
        x+=steps
    if direction=="LEFT":
        x-=steps
distance = math.sqrt(x * x + y * y)
print(round(distance))


