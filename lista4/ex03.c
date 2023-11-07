#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int i, posicaoMenor, posicaoMaior;
    float vect[TAMANHO_VETOR], menor, maior;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite um numero qualquer(%d/10): ", i + 1);
        scanf("%f", &vect[i]);
    }

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (i == 0) {
            menor = vect[i];
            maior = vect[i];
            posicaoMenor = i;
            posicaoMaior = i;
        }

        if (vect[i] < menor) {
            menor = vect[i];
            posicaoMenor = i;
        }

        if (vect[i] > maior) {
            maior = vect[i];
            posicaoMaior = i;
        }
    }

    printf("\nO elemento da posicao (%d/%d) e o maior: %.2f\n", posicaoMaior + 1, TAMANHO_VETOR, maior);
    printf("O elemento da posicao (%d/%d) e o menor: %.2f", posicaoMenor + 1, TAMANHO_VETOR, menor);
    return 0;
}
