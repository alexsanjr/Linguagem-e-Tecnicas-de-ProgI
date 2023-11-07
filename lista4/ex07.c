#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    float vect[TAMANHO_VETOR];
    int i, pares = 0, impares = 0, vetor;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite um numero real (%d/20): ", i + 1);
        scanf("%f", &vect[i]);
    }

    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor = vect[i];
        if (vetor % 2 == 0) 
            pares++;
        else
            impares++;
    }
    printf("Pares: %d\nImpares: %d", pares, impares);
    
    return 0;
}
