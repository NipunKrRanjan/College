# Literals: string, integer, float, boolean
x = 10          # int literal
y = 3.14        # float literal
z = "Hello"     # string literal
flag = False    # boolean literal
height = 5.4
is_student = True

# Taking input from user
name = input("Enter your name: ")
age = input("Enter your age: ")
# Output
print("Hello,",name)
print("Your age is:",age)
#DATA TYPES
print(type(name))   # str
print(type(age))            # int
print(type(height))         # float
print(type(is_student))     # bool
#TYPE CONVERSION
# Converting string input to integer
age_int = int(age)       # str → int
height_str = str(height)           # float → str
print("\nAfter type conversion:")
print("Age + 5 =", age_int + 5)
print("Height as string =", height_str)
# Operations and Expressions
a = 15
b = 4
print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division (/):", a / b)       # float division
print("Floor Division (//):", a // b) 
print("Modulus (%):", a % b)
print("Exponent ():", a ** b)

# Expression combining operators
expression_result = (a + b) * 2 - (a ** 2)
print("\nExpression result =", expression_result)

a="Hello World"
b=len(a)
print(b)
newa=a+" 123"
print(newa)