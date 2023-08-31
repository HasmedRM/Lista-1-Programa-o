#include <stdio.h>

int main(void) {

  unsigned valor, unidade, dezena, centena;
  
  printf("Digite um numero de três digitos: ");
  scanf("%u",&valor);

  centena = valor / 100;
  dezena = (valor / 10) % 10;
  unidade = valor % 10;

  printf("O valor na forma inversa: %u%u%u", unidade, dezena ,centena);
  
  return 0;
}