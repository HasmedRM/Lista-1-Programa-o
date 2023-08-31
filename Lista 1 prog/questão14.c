#include <stdio.h>

int main(void) {

  float celsius, Faren;
  
  printf("Valor de temperatura em celsius: ");
  scanf("%f",&celsius);

  Faren = (9 * celsius + 160)/5;
  
  printf("O valor de %.1f em celsius fica %.1f convertido para Farenheit", celsius, Faren);
  
}