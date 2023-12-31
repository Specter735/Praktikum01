def perkalian_matriks(A, B):
    n = len(A)
    hasil = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                hasil[i][j] += A[i][k] * B[k][j]

    return hasil

def main():
    n = int(input())
    print("Matriks A")
    A = [list(map(int, input().split())) for _ in range(n)]
    print("Matriks B")
    B = [list(map(int, input().split())) for _ in range(n)]

    hasil = perkalian_matriks(A, B)
    print("Matriks AXB")
    for row in hasil:
        print(*row)

if __name__ == "__main__":
    main()
