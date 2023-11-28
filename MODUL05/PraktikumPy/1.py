# Buatlah Function Disini
def max_bilangan(a, b, c, d):
    max = a

    if b > max:
        max = b

    if c > max:
        max = c

    if d > max:
        max = d

    return max

def main():
    a, b, c, d = map(int, input().split())
    hasil = max_bilangan(a, b, c, d)
    print(hasil)

if __name__ == "__main__":
    main()
