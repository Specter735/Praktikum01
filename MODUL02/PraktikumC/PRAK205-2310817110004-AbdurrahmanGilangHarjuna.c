#include <stdio.h>
#include <math.h>

int main() {
    double tinggi, samping, alas;

    printf("Masukkan tinggi segitiga: ");
    scanf("%lf", &tinggi);
    printf("Masukkan samping segitiga: ");
    scanf("%lf", &samping);

    alas = sqrt(samping * samping - tinggi * tinggi);
    printf("Alas = %.lf cm\n", alas);
    printf("Tinggi = %.lf cm\n", tinggi);
    printf("Keliling = %.lf cm\n", alas + tinggi + samping);
    printf("Luas = %.lf cm^2\n", 0.5 * alas * tinggi);

    return 0;
}
