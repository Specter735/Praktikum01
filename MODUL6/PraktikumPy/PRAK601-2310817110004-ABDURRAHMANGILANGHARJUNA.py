def matriks(baris, kolom, elemen):
    matriks = [[0] * kolom for _ in range(baris)]
    indeks_elemen = 0

    for i in range(baris):
        for j in range(kolom):
            matriks[i][j] = elemen[indeks_elemen]
            indeks_elemen += 1

    return matriks

def output_matriks(matriks):
    for baris in matriks:
        print(*baris)

input_baris_kolom = input()
baris, kolom = map(int, input_baris_kolom.split())

input_elemen = input()
elemen_matriks = list(map(int, input_elemen.split()))

matriks_hasil = matriks(baris, kolom, elemen_matriks)

print("Output:")
output_matriks(matriks_hasil)
