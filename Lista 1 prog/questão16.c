#include <stdio.h>

int main(void) {

  
  float horaAula, horasTrabalhadas, salarioLiquido, salarioBruto, desconto;

  printf("Qual o valor de hora por aula? ");
  scanf("%f",&horaAula);

  printf("Qual o valor de horas trabalhadas? ");
  scanf("%f",&horasTrabalhadas);

  printf("Qual o valor do desconto? ");
  scanf("%f",&desconto);

  salarioBruto = horaAula * horasTrabalhadas;

  salarioLiquido = salarioBruto - desconto;

  printf("O seu salario bruto é de %.2f e o seu salario liquido %.2f", salarioBruto, salarioLiquido);
}