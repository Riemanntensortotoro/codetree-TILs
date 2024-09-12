def gcd(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    
    return a

def larger(a, b):
    if a > b:
        return a*b // gcd(a, b)
    elif a < b:
        return a*b // gcd(b, a)
    else:
        return a

n, m = map(int, input().split())
print(larger(n, m))