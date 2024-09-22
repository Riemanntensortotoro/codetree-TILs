a, b = map(int, input().split())
cnt = 0

def countNumber(i):
    if i % 2 == 0:
        return False
    if i % 10 == 5:
        return False
    if i % 3 == 0 and i % 9 != 0:
        return False
    return True

for i in range(a, b+1):
    if countNumber(i):
        cnt += 1
print(cnt)