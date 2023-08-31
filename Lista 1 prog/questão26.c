#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("A distância entre os dois pontos é: %f", distancia);

    return 0;
}
