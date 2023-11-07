#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 10

int main() {
    int i, sortidos[TAMANHO_VETOR], num, posicao;

    // alimentando a sequencia de numeros aleatórios atravésdo tempo atual do computador
    // logo, sempre gerando uma sequencia aleatória nova
    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++) {
        sortidos[i] = rand() % 21;
    }

    printf("Digite um numero entre 0-20: ");
    scanf("%d", &num);

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (num == sortidos[i]) {
            posicao = i;
            printf("Numero digitado %d esta no vetor na posicao %d/10\n", num, posicao + 1);
        }
    }
    
    if (posicao == 0) 
        printf("Numero digitado %d nao se encontra no vetor", num);
    
    printf("\nNumeros aleatorios: ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", sortidos[i]);
    }
    
    return 0;
}
