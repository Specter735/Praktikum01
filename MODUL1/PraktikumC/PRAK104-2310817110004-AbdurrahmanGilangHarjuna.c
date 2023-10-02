#include <stdio.h>

int main() {
    int hargaA = 400000;
    int hargaB = 350000;    
    float diskonA = 0.13;
    float diskonB = 0.21;
    int hargaDiskonA = hargaA * (1 - diskonA);
    int hargaDiskonB = hargaB * (1 - diskonB);    
    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %d\n", diskonA * 100, hargaDiskonA);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %d\n", diskonB * 100, hargaDiskonB);    
    return 0;
}
