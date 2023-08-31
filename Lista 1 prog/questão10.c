#include <stdio.h>

int main(void) {

  float comprimento, largura , altura;

  printf("Digite o valor do comprimento da caixa: ");
  scanf("%f",&comprimento);

  printf("Digite o valor do largura da caixa: ");
  scanf("%f",&largura);

  printf("Digite o valor do altura da caixa: ");
  scanf("%f",&altura);

  float volume = comprimento * largura * altura;
  
  printf("O volume dessa caixa e de %.2f", volume);
  
}