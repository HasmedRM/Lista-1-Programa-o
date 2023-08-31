#include <stdio.h>

int main() {

  unsigned num1, num2;

  printf("Digite um valor: ");
  scanf("%u",&num1);
  
  printf("Digite um outro valor: ");
  scanf("%u",&num2);

  unsigned multiplo = (num1 % num2 == 0) || (num2 % num1 == 0);

  multiplo ? printf("São multiplos") : printf("Não são multiplos");
  
  return 0;
}