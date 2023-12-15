def kode_pesan(kode, pesan):
    panjang_kode = len(kode)
    panjang_pesan = len(pesan)

    if panjang_kode != panjang_pesan:
        print("Panjang kalimat berbeda, pesan palsu")
        return

    hasil = ""
    jumlah_bintang = 0
    jumlah_pagar = 0

    for i in range(panjang_kode):
        if kode[i] == pesan[i]:
            hasil += '*'
            jumlah_bintang += 1
        else:
            hasil += '#'
            jumlah_pagar += 1

    print(hasil)
    print(f"* = {jumlah_bintang}")
    print(f"# = {jumlah_pagar}")

    if jumlah_bintang >= jumlah_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

if __name__ == "__main__":
    kode = input()
    pesan = input()
    kode_pesan(kode, pesan)
