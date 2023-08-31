#include <stdio.h>

int main(void) {

  float conta;

  printf("Qual o valor a se pagar da conta?");
  scanf("%f",&conta);

  printf("A conta com o adicional de 10 porcento é igual a %.2f", (conta * 1.10));
}