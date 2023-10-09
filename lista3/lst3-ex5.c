#include <stdio.h>

int main() {
    int par = 0, impar = 0, num = 0;

    do {

        if(num % 2 == 0) {
            par += num;
        } else {
            impar += num;
        }
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

    } while (num <= 1000);

    printf("Soma dos impares: %d\nSoma dos pares: %d", impar, par);
    return 0;
}