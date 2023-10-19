#include <stdio.h>

int main() {
    double nilaiPertama, nilaiKedua;
    
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &nilaiPertama);    
    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &nilaiKedua);
    
    double hasil = nilaiPertama + nilaiKedua;    
    printf("Hasil dari penjumlahan nilai pertama %g dan nilai kedua %g adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
    
    return 0;
}
