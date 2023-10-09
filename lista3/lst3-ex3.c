#include <stdio.h>

int main() {
    int num, result;

    printf("digite um numero inteiro(ou 0 para cancelar a operacao): ");
    scanf("%d", &num);
    result = num;

    while (num != 0) {
        printf("Resultado do produto acumulado: %d\n", result);
        printf("Digite outro numero inteiro(ou 0 para cancelar a operação): ");
        scanf("%d", &num);
        result *= num;
    }
    printf("Resultado final do produto: %d", result);

    return 0;
}