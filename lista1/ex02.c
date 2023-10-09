#include <stdio.h>

int main() {
    int num1, num2, total;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    total =num1 + num2;

    printf("A soma de %d + %d é: %d", num1, num2, total);

    return 0;
}