def gcd(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a

n, m = map(int, input().split())
print(gcd(n, m))