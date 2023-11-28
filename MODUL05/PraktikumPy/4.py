def reverse(num):
    reversed_num = 0
    while num > 0:
        reversed_num = reversed_num * 10 + num % 10
        num //= 10
    return reversed_num

def main():
    A, B = map(int, input().split())
    A = reverse(A)
    B = reverse(B)
    C = A + B
    print(reverse(C))

if __name__ == "__main__":
    main()
