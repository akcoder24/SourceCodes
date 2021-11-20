#LetUsPython
#Chapter2_Question4
#Assume a suitable value for Ramesh's basic salary. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary
basic_salary=input("Enter Basic Salary: ")
basic_salary=int(basic_salary)
dallowance = 0.4 * basic_salary
house_rent = 0.2 * basic_salary
gross_salary = basic_salary + dallowance + house_rent
print("Basic Salary:",  basic_salary)
print("Dearness Allowance:", dallowance)
print("House Rent:", house_rent)
print("Gross Salary:", gross_salary)
