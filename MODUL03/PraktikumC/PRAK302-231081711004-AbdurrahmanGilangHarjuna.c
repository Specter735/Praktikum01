#include <stdio.h>

void main(){
    int nilai;
    char grade;

    printf("Program Grade Nilai\n");
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        grade = 'A';
    } else if (nilai >= 70 && nilai <= 79) {
        grade = 'B';
    } else if (nilai >= 60 && nilai <= 69) {
        grade = 'C';
    } else if (nilai >= 50 && nilai <= 59) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    printf("Nilai: %d\n", nilai);
    printf("Grade anda: %c\n", grade);
}