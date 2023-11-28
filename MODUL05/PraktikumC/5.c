#include <stdio.h>

void Biodata(int tahun_lahir, char nama[], char asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahun_lahir;

    printf("Perkenalkan nama saya: %s\n", nama);
    printf("Umur saya: %d tahun\n", umur);
    printf("Saya adalah angkatan: %d\n", tahun_sekarang);
    printf("Asal saya dari: %s\n", asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];

    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", Asal);

    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}
