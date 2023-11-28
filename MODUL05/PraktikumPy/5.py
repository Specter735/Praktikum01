def Biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    Umur = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan nama saya: {nama}")
    print(f"Umur: {Umur} tahun")
    print(f"Saya adalah angkatan: {tahun_sekarang}")
    print(f"Asal saya dari: {asal}")

def main():
    tahun_lahir = int(input())
    nama = input()
    asal = input()

    Biodata(tahun_lahir, nama, asal)

if __name__ == "__main__":
    main()