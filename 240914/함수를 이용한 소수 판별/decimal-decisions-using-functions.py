import math


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n))+ 1):
        if n % i == 0:
            return False
    return True


a, b = map(int, input().split())
sumN = 0
for i in range(a, b+1):
    if is_prime(i):
        sumN += i

print(sumN)