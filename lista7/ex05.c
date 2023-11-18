#include <stdio.h>
#define TAM 5

int somaDivisores(int num) {
    int i, soma = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int i, nums[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Digite um numero positivo (%d/%d): ", i + 1, TAM);
        scanf("%d", &nums[i]);

        if (nums[i] <= 0) {
            printf("Numero digitado negativo ou igual a zero! Por favor digite outro!\n");
            i--;
        }
    }

    for (i = 0; i < TAM; i++) 
        printf("A soma dos divisores de %d e: %d\n", nums[i], somaDivisores(nums[i]));    
    
    return 0;
}
