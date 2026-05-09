# Write code here
#input salary - - -> salary-=(salary*10)/100 - - ->salary-=(salary5)/100 
#. - ->salary -= (salary*3)/100
#if salary<500000 - - ->break ,elif salary >=500000 and salary < 10,00,000 - - ->
#salary-=(salary*10)/100
#elif salary >=10,00,000 and salary < 20,00,000 - - ->
#salary-=(salary*20)/100
#else salary>=20,00,000 - - -> salary-=(salary*30)/100
#print - - -> salary
salary = int(input("Enter the salary: "))

salary -= salary * (10 + 5 + 3) / 100

print("Salary after deduction on CTC - HRA(10%), DA(5%), PF(3%):", salary)

if salary < 500000: 
    print("Salary after tax deduction:", salary)

elif 500000 <= salary < 1000000:
    salary -= (salary * 10) / 100
    print("Salary after tax deduction:", salary)

elif 1000000 <= salary < 2000000:
    salary -= (salary * 20) / 100
    print("Salary after tax deduction:", salary)

else:
    salary -= (salary * 30) / 100
    print("Salary after tax deduction:", salary)

     
