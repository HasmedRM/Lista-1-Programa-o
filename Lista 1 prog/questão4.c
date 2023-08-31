#include <stdio.h>

int main(void) {

  int real;

  printf("Digite um valor: ");
  scanf("%d",&real);

  printf("O triplo de %d é %d\n", real, (real * 3));
  printf("O quadrado de %d é %d\n", real, (real * real));
  printf("O meio de %d é %d\n", real, (real / 2));
}