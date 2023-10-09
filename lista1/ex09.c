#include <stdio.h>

int main() {
    float saldo;

    printf("Digite o saldo de sua conta: ");
    scanf("%f", &saldo);
    saldo *= 1.02;

    printf("Novo saldo com reajuste: %.2f", saldo);
    return 0;
}