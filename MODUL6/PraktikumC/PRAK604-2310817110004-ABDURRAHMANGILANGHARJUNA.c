#include <stdio.h>
#include <string.h>

void kodepesan(const char *kode, const char *pesan) {
    int panjangKode = strlen(kode);
    int panjangPesan = strlen(pesan);

    if (panjangKode != panjangPesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return;
    }

    char hasil[panjangPesan + 1];
    int jumlahBintang = 0, jumlahPagar = 0;

    for (int i = 0; i < panjangKode; i++) {
        if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            jumlahBintang++;
        } else {
            hasil[i] = '#';
            jumlahPagar++;
        }
    }

    hasil[panjangPesan] = '\0';
    printf("%s\n", hasil);
    printf("* = %d\n", jumlahBintang);
    printf("# = %d\n", jumlahPagar);

    if (jumlahBintang >= jumlahPagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
}

int main() {
    char kode[100], pesan[100];
    fgets(kode, sizeof(kode), stdin);
    kode[strcspn(kode, "\n")] = '\0';

    printf("");
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0';

    kodepesan(kode, pesan);

    return 0;
}
