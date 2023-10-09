#include <stdio.h>

int main() {
    float menor, maior;

    for (int i = 1; i <= 15; ++i) {
        float num;

        printf("Digite um numero(%d/15): ", i);
        scanf("%f", &num);

        if(i == 1) {
            maior = num;
            menor = num;
        }

        if(num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }

    }

    printf("Maior numero: %.2f \nMenor numero: %.2f", maior, menor);
    return 0;
}