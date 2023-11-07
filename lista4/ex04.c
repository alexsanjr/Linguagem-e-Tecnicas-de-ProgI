#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int i, razao, vect[TAMANHO_VETOR];

    printf("Digite um numero inicial em inteiro: ");
    scanf("%d", &vect[0]);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    for (i = 1; i < TAMANHO_VETOR; i++) 
        vect[i] = vect[i - 1] + razao;

    printf("Valores da P.A: ");
    for (i = 0; i < TAMANHO_VETOR; i++)      
        printf("%d ", vect[i]);

    return 0;
}
