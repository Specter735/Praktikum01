#include <stdio.h>

void urutan(int n) {
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    if (n % 2 == 1) {
        n--;
    }
    for (int i = n; i >= 2; i -= 2) {
        printf("%d ", i);
    }
}

int main() {
    int max;
    scanf("%d", &max);
    urutan(max);

    return 0;
}
