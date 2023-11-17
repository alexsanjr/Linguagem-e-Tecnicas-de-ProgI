#include <stdio.h>

int potencia(int base, int expoente) {
    int result = base;

    if (base == 0) {
        return 0;
    }

    if (expoente == 0) {
        return 1;
    }

    for (int i = 0; i < expoente - 1; ++i)
            result *= base;

    return result;
}

int main() {
    int base, expoente;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    printf("Resultado de %d^%d: %d", base, expoente, potencia(base, expoente));


    return 0;
}