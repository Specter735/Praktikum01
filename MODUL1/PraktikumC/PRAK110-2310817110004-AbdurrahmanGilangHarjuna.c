#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5;
    float tinggi = 12;
    float sisiA, sisiB, sisiC, keliling, luas;
    sisiA = alas;
    sisiB = tinggi;
    sisiC = hypot(alas, tinggi);
    keliling = sisiA + sisiB + sisiC;
    luas = 0.5 * alas * tinggi;
    printf("Diketahui:\n");
    printf("Alas = %.fcm\n", alas);
    printf("Tinggi = %.fcm\n", tinggi);
    printf("\nJawab:\n");
    printf("Sisi A = %.f cm\n", sisiA);
    printf("Sisi B = %.f cm\n", sisiB);
    printf("Sisi C = %.f cm\n", sisiC);
    printf("Keliling = %.f cm\n", keliling);
    printf("Luas = %.f cm\n", luas);
    return 0;
}
