#include <stdio.h>

#define TAMANHO 3

int main() {
    int i, j, mat[TAMANHO][TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            mat[i][j] *= 5;
        }
    }
    
    printf("\nMatriz multiplicada por 5: \n\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) { 
            if (j == 0)
                printf("|");
            printf("%6d", mat[i][j]);
            if(j == TAMANHO - 1)
                printf("    |");
        }
        printf("\n\n");
    }

    return 0;
}
