#include <stdio.h>

int main(void) {

  unsigned numero;

  printf("Digite um numero: ");
  scanf("%d",&numero);

  (numero % 2) ? puts("O valor é impar") : puts("O valor é par");
  return 0;
}