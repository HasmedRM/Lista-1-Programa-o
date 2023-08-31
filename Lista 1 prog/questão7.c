#include <stdio.h>

int main(void) {
  
  int horas , minutos, segundos;

  printf("O valor de horas:");
  scanf("%d",&horas);

  printf("O valor de minutos:");
  scanf("%d",&minutos);

  printf("O valor de segundos:");
  scanf("%d",&segundos);

  int total = (horas * 3600) + (minutos * 60) + segundos;

  printf("O valor total em segundos é: %d ", total);
  
}