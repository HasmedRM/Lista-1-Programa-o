#include <stdio.h>

int main(void) {

  int x;

  printf("Digite um valor: ");
  scanf("%d",&x);

  printf("Sucessor:%d // Antecessor:%d", (x + 1), (x - 1));
}