#include <stdio.h>
#include <math.h>

int main() {
    double r, h;
    printf("Masukkan jari-jari bejana: ");
    scanf("%lf", &r);
    printf("Masukkan tinggi bejana: ");
    scanf("%lf", &h);

    double volume, luas, keliling;
    const double pi = 22/7;
    volume = r * r * h * pi;
    luas = 2 * r * (r + h) * pi;
    keliling = 2 * r * pi;
    
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}
