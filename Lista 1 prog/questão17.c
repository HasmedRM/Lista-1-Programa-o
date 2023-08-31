#include <stdio.h>

int main() {

  int valor, modulo;

  printf("Digite um valor para dar seu valor absoluto: ");
  scanf("%d",&valor);

  modulo = abs(valor);

  printf("O valor absoluto é de %d", modulo);
}