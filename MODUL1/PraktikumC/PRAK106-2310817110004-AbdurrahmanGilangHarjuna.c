#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    int apakahAsamaB = (a == b) ? 1 : 0;
    int apakahBlebihbesarC = (b > c) ? 1 : 0;
    int apakahAtidaksamaC = (a != c) ? 1 : 0;
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", apakahAsamaB);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", apakahBlebihbesarC);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", apakahAtidaksamaC);
    return 0;
}
