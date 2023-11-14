def urutan(n):
    for i in range(1, n + 1, 2):
        print(i, end=" ")
    print()
    if n % 2 == 1:
        n -= 1

    for i in range(n, 1, -2):
        print(i, end=" ")

if __name__ == "__main__":
    max = int(input(""))
    urutan(max)
