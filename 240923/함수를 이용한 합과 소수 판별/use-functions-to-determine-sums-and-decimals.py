from math import sqrt

a, b = map(int, input().split())

def digitNumber(n):
    digitsum = 0
    while n > 0:
        r = n % 10
        digitsum += r
        n = n // 10
    return digitsum

def primeNumber(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

result = 0
for j in range(a, b+1):
    if digitNumber(j) % 2 == 0 and primeNumber(j):
        result += 1

print(result)