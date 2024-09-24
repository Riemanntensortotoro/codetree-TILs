a, b = map(int, input().split())

def isThree(n):
    if n % 3 == 0:
        return True
    return False

def isNum(n):
    while n > 0:
        if n % 10 == 3 or n % 10 == 6 or n % 10 == 9:
            return True
        n //= 10
    return False

result = 0
for i in range(a, b+1):
    if isNum(i) or isThree(i):
        result += 1

print(result)