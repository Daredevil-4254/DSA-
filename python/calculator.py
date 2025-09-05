while True:
    print("\n****Simple Calculator****")
    print("Enter 'exit1' to stop")

    a1 = input("Enter the 1st number: ")
    if a1.lower() == "exit1":  
        print("Exiting calculator...")
        break  # Stop execution

    a2 = input("Enter the 2nd number: ")
    if a2.lower() == "exit1":  
        print("Exiting calculator...")
        break

    operator = input("Enter operator (+, -, *, /): ")
    if operator.lower() == "exit1":
        print("Exiting calculator...")
        break

    # Convert inputs to float
    try:
        a1 = float(a1)
        a2 = float(a2)
    except ValueError:
        print("Invalid input! Please enter numbers.")
        continue  # Restart loop

    # Perform operations
    if operator == "+":
        print("Sum:", a1 + a2)
    elif operator == "-":
        print("Difference:", abs(a1 - a2))  # Absolute difference
    elif operator == "*":
        print("Multiplication:", a1 * a2)
    elif operator == "/":
        if a2 == 0:
            print("Error! Division by zero.")
        else:
            print("Division:", a1 / a2)
    else:
        print("Invalid operator! Please use +, -, *, or /.")

