#include <stdio.h>

void Matriks(int baris, int kolom, int elemen[]) {
    int matriks[baris][kolom];
    int indeksElemen = 0;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriks[i][j] = elemen[indeksElemen];
            indeksElemen++;
        }
    }

    printf("Output:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int jumlahElemen = baris * kolom;
    int elemenMatriks[jumlahElemen];
    for (int i = 0; i < jumlahElemen; i++) {
        scanf("%d", &elemenMatriks[i]);
    }
    Matriks(baris, kolom, elemenMatriks);

    return 0;
}
