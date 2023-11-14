#include <stdio.h>

void tambahkurang(int angka1, int angka2) {
    if (angka1 < angka2) {
        for (int i = angka1; i <= angka2; i++) {
            printf("%d %d", i, angka2 - i + angka1);
            if (i < angka2) {
                printf(" - ");
            }
        }
    } else {
        for (int i = angka1; i >= angka2; i--) {
            printf("%d %d", i, angka2 - i + angka1);
            if (i > angka2) {
                printf(" - ");
            }
        }
    }
}

int main() {
    int ke1, ke2;
    scanf("%d %d", &ke1, &ke2);
    tambahkurang(ke1, ke2);

    return 0;
}
