#include <stdio.h>

int main(void) {

  float altura;
  int sexo;

  printf("Qual sua altura? ");
  scanf("%f",&altura);
  
  printf("Qual seu sexo? \n 1 - Masculino ou  2 - Feminino\n");
  scanf("%d",&sexo);
    
    switch (sexo) {
      case 1: 
      printf("O seu peso ideal é de %.1f", 72.7 * altura - 58);
      break;
      case 2:
       printf("O seu peso ideal é de %.1f", 62.1 * altura - 44.7);
       break;
      default:
      printf("Digite um valor valido");
    }
}