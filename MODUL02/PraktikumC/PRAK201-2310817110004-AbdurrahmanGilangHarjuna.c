#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[10], ttl[50], alamat[100], hobby[50], no_hp[20];

    printf("Nama\t\t\t: ");
    gets(nama);
    printf("NIM\t\t\t: ");
    gets(nim);
    printf("Kelas Paralel\t\t: ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir\t: ");
    gets(ttl);
    printf("Alamat\t\t\t: ");
    gets(alamat);
    printf("Hobby\t\t\t: ");
    gets(hobby);
    printf("No. HP\t\t\t: ");
    gets(no_hp);

    printf("\nOutput\n");
    printf("Nama\t\t\t: %s\n", nama);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", kelas);
    printf("Tempat/Tanggal Lahir\t: %s\n", ttl);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", no_hp);
    return 0;
}
