#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int i, posicao;
    float vect[TAMANHO_VETOR], maior = 0;
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite um numero qualquer (%d/10): ", i + 1);
        scanf("%f", &vect[i]);
    }
    
    for (i =  0; i < TAMANHO_VETOR; i++) {
        if (i == 0) {
            maior = vect[i];
            posicao = i;
        }
        if (vect[i] > maior) {
            maior = vect[i];
            posicao = i;
        }
    }

    printf("O elemento da posicao (%d/%d) e o maior: seu valor e de %.2f", posicao + 1, TAMANHO_VETOR, maior);
    return 0;
}
