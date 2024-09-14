def yoonyear(n):
    if n % 4 != 0:
        return False
    elif n % 100 != 0:
        return True
    elif n & 400 == 0:
        return True
    return False

y = int(input())
if yoonyear(y):
    print("true")
else:
    print("false")