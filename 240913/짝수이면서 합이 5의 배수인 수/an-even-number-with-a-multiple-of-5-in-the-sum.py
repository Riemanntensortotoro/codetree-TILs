def is_number(n):
    sumN = 0;
    while n > 0:
        sumN += n % 10
        n = n // 10
    return sumN

n = int(input())
        
if is_number(n) % 5 == 0 and n % 2 == 0:
    print("Yes")
else:
    print("No")