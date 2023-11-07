#include <stdio.h>

#define TAMANHO 5


int main() {
    int i, j, mat[TAMANHO][TAMANHO] = { 0 };

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i == j) 
                mat[i][j] = 1;
        }
    }


    printf("\nResultado:\n\n");
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
