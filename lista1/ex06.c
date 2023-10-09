#include <stdio.h>

int main() {
    float num, quartaParte;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    quartaParte = num / 4;

    printf("1/4 de %.2f é: %.2f", num, quartaParte);

    return 0;
}