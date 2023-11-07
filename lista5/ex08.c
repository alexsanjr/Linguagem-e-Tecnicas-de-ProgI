#include <stdio.h>

#define TAMANHO 10
int main() {

    int i, j, vect[TAMANHO], aux = 0;

    for (i = 0 ; i < TAMANHO; i++) {
        while (aux == 0) {
            printf("Digite um numero inteiro (%d/%d): ", i + 1, TAMANHO);
            scanf("%d", &vect[i]);

            for (j = 0; j < i; j++) {
                if (vect[j] == vect[i])
                    aux = 2;
            }
            if (aux == 2) {
                aux = 0;
                printf("Digite outro numero!\n");
            } else
                aux = 1;
        }
        aux = 0;
    }

    printf("Numero armazenados: ");

    for (i = 0; i < TAMANHO; ++i) {
        printf("%d ", vect[i]);
    }

    return 0;
}