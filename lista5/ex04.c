#include <stdio.h>

#define TAMANHO 3

int main() {
    int i, j, aux = 0, mat[TAMANHO][TAMANHO], vect[TAMANHO], resultados[TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite um numero inteiro para completar a matriz: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite um numero inteiro para completar o vetor: ");
            scanf("%d", &vect[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        resultados[i] = 0;
        for (j = 0; j < TAMANHO; j++) 
            aux += vect[j] * mat[j][i];
    
        resultados[i] = aux;
        aux = 0;
    }

    printf("\nResultado: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", resultados[i]);
    }
    return 0;
}
