#include <stdio.h>

int main() {
    int num1, num2, num3, total;

    printf("Digite um numero(1/3): ");
    scanf("%d", &num1);

    printf("Digite mais um numero(2/3): ");
    scanf("%d", &num2);

    printf("Digite mais um numero(3/3): ");
    scanf("%d", &num3);

    total = (num1 + num2 + num3) / 3;

    printf("Media: %d", total);


    return 0;
}