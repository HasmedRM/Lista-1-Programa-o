#include <stdio.h>

int main(void) {

  float raio;
  
  printf("Qual o valor do raio da circunferencia? ");
  scanf("%f",&raio);

  printf("O valor do seu diametro é de: %.2f\n", (2 *raio));
  printf("O valor do seu conprimento é de: %.2f\n", (2 * 3.14159 * raio));
  printf("O valor da sua area é de: %.2f\n",(3.14159 * (raio * raio) ));
  
  return 0;
}