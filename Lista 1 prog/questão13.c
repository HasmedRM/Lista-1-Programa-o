#include <stdio.h>

int main(void) {

  int a, b, temp;

  printf("Digite um valor para a: ");
  scanf("%d",&a);

  printf("Digite um valor para b: ");
  scanf("%d",&b);

  printf("a:%d, b:%d\n", a, b);
  
  temp = a;
  a = b;
  b = temp;

  printf("Troca dos valores\n");
  printf("a:%d, b:%d", a, b);

  
}