#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    float media_aritmetica = (num1 + num2 + num3) / 3.0;
    float media_geometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("Média aritmética: %f\n", media_aritmetica);
    printf("Média geométrica: %f", media_geometrica);

    return 0;
}