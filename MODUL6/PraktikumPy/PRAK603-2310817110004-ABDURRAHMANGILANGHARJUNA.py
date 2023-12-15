n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama.")

baris1 = list(map(int, input().split()))
baris2 = list(map(int, input().split()))

hasil_perkalian = [baris1[i] * baris2[i] for i in range(n1)]
print(*hasil_perkalian)

