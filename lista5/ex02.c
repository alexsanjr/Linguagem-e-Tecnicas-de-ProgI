#include <stdio.h>

int main() {
    int i, j, x;
    float mat1[2][3], mat2[3][2], matP[2][2], aux = 0.0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite um numero para a primeira matriz: ");
            scanf("%f", &mat1[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite um numero para a segunda matriz: ");
            scanf("%f", &mat2[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {    

            matP[i][j] = 0;  
            for (x = 0; x < 3; x++) {
                aux +=  mat1[i][x] * mat2[x][j];
            }
            matP[i][j] = aux;
            aux = 0.0;
        }
    }

    printf("Multiplicacao das matrizes: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) { 
            if (j == 0)
                printf("|");
            printf("%6.f", matP[i][j]);
            if(j == 1)
                printf("    |");
        }
        printf("\n\n");
    }

    return 0;
}
