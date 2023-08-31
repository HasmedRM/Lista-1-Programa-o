#include <stdio.h>

int main(void) {

  float dolar;
  int quantidadeReal;

  printf("Qual a cotação do dollar no momento? ");
  scanf("%f",&dolar);

  printf("Quantos reais voce deseja converter para dolar?");
  scanf("%d",&quantidadeReal);

  printf("Voce terá %.2f de dólares", (quantidadeReal / dolar));
}