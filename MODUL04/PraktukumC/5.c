#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int i, j, total = 0;
    for (i = 1; i <= n; i++) {
        int sum = 0;
        for (j = i; j >= 1; j--) {
            sum += j * kelipatan;
            printf("(%d * %d) ", j, kelipatan);
        }
        total += sum;
        printf("= %d\n", sum);
    }

    printf("%d\n", total);

    return 0;
}
