#include <stdio.h>

int main(void) {

  int a, b; 
  
  printf("Digite um valor: ");
  scanf("%d",&a);
  
  printf("Digite outro valor: ");
  scanf("%d",&b);

    printf("%d + %d = %d\n", a, b , (a + b));
    printf("%d * %d = %d\n",a, b , (a * b));
    printf("%d - %d = %d\n",a, b , (a - b));
    printf("%d / %d = %d\n",a, b , (a / b));
    printf("%d resto de divisão %d = %d\n",a, b, (a % b));
    
  


}