#include <stdio.h>

#define TAMANHO_VETOR 50

int main() {
    int i, tamanho, countPar = 0, countImpar = 0, vect[TAMANHO_VETOR], 
    vectInvertido[TAMANHO_VETOR], pares[TAMANHO_VETOR], impares[TAMANHO_VETOR];

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite um numero inteiro (%d/%d): ", i + 1, TAMANHO_VETOR);
        scanf("%d", &vect[i]);
    }
    
    for (i = 0; i < TAMANHO_VETOR; i++) {    
        if (vect[i] % 2 == 0) {
            pares[countPar] = vect[i];
            countPar++;
        } else {
            impares[countImpar] = vect[i];
            countImpar++;
        }
        
    }

    tamanho = TAMANHO_VETOR - 1;
    for (i = 0; i < TAMANHO_VETOR; i++) {
        vectInvertido[tamanho] = vect[i];
        tamanho--;
    }  

    printf("Vetor: ");
    for (i = 0; i < TAMANHO_VETOR; i++)
        printf("%d ", vect[i]);
    
    printf("\nPares: ");
    for (i = 0; i < countPar; i++)
        printf("%d ", pares[i]);

    printf("\nImpares: ");
    for (i = 0; i < countImpar; i++)
        printf("%d ", impares[i]);
    
     printf("\nDe tras para frente: ");
    for (i = 0; i < TAMANHO_VETOR; i++)
        printf("%d ", vectInvertido[i]);
    
    return 0;
}
