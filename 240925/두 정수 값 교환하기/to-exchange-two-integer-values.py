n, m = map(int, input().split())

def swap(a, b):
    a, b = b, a
    print(f"{a} {b}")

swap(n, m)