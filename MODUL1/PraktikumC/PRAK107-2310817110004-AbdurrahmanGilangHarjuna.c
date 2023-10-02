#include <stdio.h>

int main() {
    int panjangSisi1 = 4;
    int panjangSisi2 = 5;
    int panjangSisi3 = 7;   
    int kelilingTanah = 16;
    int hargaPerMeter = 85000;
    int totalBiaya = kelilingTanah * hargaPerMeter;   
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", panjangSisi1, panjangSisi2, panjangSisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kelilingTanah);
    printf("Harga tanah Per Meter adalah %d\n", hargaPerMeter);   
    printf("\nJawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", totalBiaya);
    return 0;
}
