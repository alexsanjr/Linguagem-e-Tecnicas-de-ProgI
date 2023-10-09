#include <stdio.h>

int main() {
    int num, N, soma1 = 0, soma2 = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    N = num;
    while (N > 0) {
        soma1 += N % 10;
        N /= 10;
    }

    while (soma1 > 0) {
        soma2 += soma1 % 10;
        soma1 /= 10;
    }

    printf("%d-%d", num, soma2);

    return 0;
}