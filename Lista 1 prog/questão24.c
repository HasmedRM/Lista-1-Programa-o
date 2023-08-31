#include <stdio.h>

int main() {
    unsigned x, n;
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = x << n;  

    printf("O resultado de %u * 2^%u é %u", x, n, resultado);

    return 0;
}