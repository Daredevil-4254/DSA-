# Write a menu-driven program -

# cm to ft  |1 cm = 0.0328084ft

# km to miles| 1km = 0.621371miles
# USD to INR | $1=86.96 Indian Rupee
# exit

while True:
    print('''************ Menu Driven Program *************
    type 1 for cm to feet conversion 
    type 2 for km to miles conversion
    type 3 for USD to INR conversion
    type exit to EXIT!!    ''')

    n = input('Enter your choice: ')

    if n == '1':
        cm = float(input("Enter cm: "))
        ans = cm * 0.0328084
        print("Feet value:", ans)
    elif n == '2':
        km = float(input("Enter km: "))
        ans = km * 0.621371
        print("Miles value:", ans)
    elif n == '3':
        USD = float(input("Enter USD: "))
        ans = USD * 86.96
        print("INR value:", ans)
    elif n in ('exit', 'Exit', 'EXIT'):
        print("Exiting program...")
        break
    else:
        print('Invalid input, try again!')
