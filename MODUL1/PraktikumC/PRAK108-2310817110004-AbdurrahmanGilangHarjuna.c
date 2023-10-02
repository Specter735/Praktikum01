#include <stdio.h>

int main () {
    int KelilingTaman = 5;
    float Jaraktempuh = 14.0;
    float jariJari = Jaraktempuh/(2*3.14*KelilingTaman);  
    printf("Diketahui\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", KelilingTaman);
    printf("Jarak tempuh Pak Dengklek =%d kilometer\n", Jaraktempuh);
    printf("\nJawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer", jariJari);
    return 0;
}