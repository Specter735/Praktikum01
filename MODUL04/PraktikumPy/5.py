def main():
    n, kelipatan = map(int, input("").split())

    total = 0
    for i in range(1, n + 1):
        row_sum = 0
        for j in range(i, 0, -1):
            row_sum += j * kelipatan
            print(f"({j} * {kelipatan}) ", end="")
        total += row_sum
        print(f"= {row_sum}")

    print(total)

if __name__ == "__main__":
    main()
