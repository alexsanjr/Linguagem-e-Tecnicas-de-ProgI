#include <stdio.h>
#include <math.h>

float distanciaEntreDoisPontos(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    printf("A distancia entre os pontos (%.2f/%.2f), (%.2f/%.2f) eh de: %.2f",
           x1, y1, x2, y2,distanciaEntreDoisPontos(x1, y1, x2, y2));

    return 0;
}