#include <stdio.h>

int menorNumero(int a, int b) {
    if ( b < a)
        return b;
    else
        return a;
}

int main() {

    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    printf("Menor numero entre %d e %d: %d", num1, num2, menorNumero(num1, num2));

    return 0;
}
