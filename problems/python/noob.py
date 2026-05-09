def calculate_salary(salary):
    """Calculates final salary after deductions and tax."""
    
    # Initial Deductions (HRA 10%, DA 5%, PF 3%)
    salary -= salary * (10 + 5 + 3) / 100
    print(f"Salary after HRA (10%), DA (5%), PF (3%) deductions: {salary:.2f}")

    # Tax Deductions based on salary range
    if salary < 500000:
        tax_rate = 0  # No tax
    elif salary < 1000000:
        tax_rate = 10  # 10% tax
    elif salary < 2000000:
        tax_rate = 20  # 20% tax
    else:
        tax_rate = 30  # 30% tax

    salary -= salary * tax_rate / 100
    print(f"Salary after tax deduction ({tax_rate}%): {salary:.2f}")
    
    return salary

# Taking user input
try:
    salary = float(input("Enter your salary: "))
    final_salary = calculate_salary(salary)
except ValueError:
    print("Invalid input! Please enter a numeric salary.")
