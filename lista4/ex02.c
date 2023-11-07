#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int i, posicao;
    float vect[TAMANHO_VETOR], menor;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite um numero qualquer(%d/10): ", i + 1);
        scanf("%f", &vect[i]);
    }

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (i == 0) {
            menor = vect[i];
            posicao = i;
        }

        if (vect[i] < menor) {
            menor = vect[i];
            posicao = i;
        }
    }

    printf("O elemento da posicao (%d/%d) e o menor: seu valor e de %.2f", posicao + 1, TAMANHO_VETOR, menor);
    return 0;
}
