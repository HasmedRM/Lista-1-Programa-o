   #include <stdio.h>

int main(void) {
  unsigned dias;

  printf("Quantos dias o trabalhou? ");
  scanf("%d",&dias);

  float pagamento = dias * 50.25;

  if (dias < 11) {
    printf("O seu salario sera de %.2f R$",(pagamento * 0.90));
  } else if(dias > 10 && dias < 21) {
    printf("O seu salario sera de %.2f R$",(pagamento * 1.20) * 0.90);
  } else {
    printf("O seu salario sera de %.2f R$",(pagamento * 1.30) * 0.90);
  }
}