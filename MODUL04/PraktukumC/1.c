#include <stdio.h>

int main() {
  int a, i;
  char simbol;

  printf("Kelipatan: ");
  scanf("%d", &a);
  printf("Simbol: ");
  scanf(" %c", &simbol);

  for (i = 1; i <= 50; i++) {
    if (i % a == 0) {
      printf("%c ", simbol);
    } else {
      printf("%d ", i);
    }
  }
  return 0;
}
