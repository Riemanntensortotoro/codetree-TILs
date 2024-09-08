N = int(input())
for i in range(N):
    for j in range(1, N + 1):
        K = (i * N + j) % 9
        if K == 0:
            K = 9
        print(K, end=" ")
    print()