def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    return a // b 

a, o, c = input().split()
a = int(a)
c = int(c)

if o == '+':
    result = add(a, c)
    print(f"{a} {o} {c} = {result}")
elif o == '-':
    result = subtract(a, c)
    print(f"{a} {o} {c} = {result}")
elif o == '*':
    result = multiply(a, c)
    print(f"{a} {o} {c} = {result}")
elif o == '/':
    result = divide(a, c)
    print(f"{a} {o} {c} = {result}")
else:
    print("False")