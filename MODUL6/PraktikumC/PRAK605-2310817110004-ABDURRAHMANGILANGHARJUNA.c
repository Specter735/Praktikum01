#include <stdio.h>

void perkalianMatriks(int n, int A[n][n], int B[n][n], int hasil[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void tampilkanMatriks(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n][n], B[n][n], hasil[n][n];
    printf("Matriks A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriks B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    perkalianMatriks(n, A, B, hasil);
    printf("Matriks AXB:\n");
    tampilkanMatriks(n, hasil);

    return 0;
}
