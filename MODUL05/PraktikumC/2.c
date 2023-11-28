#include <stdio.h>
#include <stdlib.h>

int hitung(int nilai1, int nilai2) {
    // Lengkapi Function Ini
    return abs (nilai1 - nilai2);
}

int mutlak(int angka) {
    // Lengkapi Function Ini
    return abs (angka);
}

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int hasil =(hitung(a, b)) + (hitung(c, d));
    printf("%d", hasil);

    return 0;
}
