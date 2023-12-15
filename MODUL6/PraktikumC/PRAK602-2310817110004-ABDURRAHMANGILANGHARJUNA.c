#include <stdio.h>

int main() {
    int ruangan;
    scanf("%d", &ruangan);

    int zetsuputih[ruangan];
    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &zetsuputih[i]);
        printf("%d ", zetsuputih[i] * (i + 1));
    }

    return 0;
}
