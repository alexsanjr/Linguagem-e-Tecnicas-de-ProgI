#include <stdio.h>

#define LINHA 2
#define COLUNA 3    

int main() {
    int i, j;
    float mat1[LINHA][COLUNA], mat2[LINHA][COLUNA], sum[LINHA][COLUNA];

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("Digite um numero para a primeira matriz: ");
            scanf("%f", &mat1[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("Digite um numero para a segunda matriz: ");
            scanf("%f", &mat2[i][j]);
        }
    }
    
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Somatorio das matrizes:\n");

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            if (j == 0)
                printf("|");

            printf("%6.f", sum[i][j]);

            if(j == COLUNA - 1)
                printf("    |");
        }
        printf("\n\n");
    }
    
    return 0;
}
