#include <stdio.h>

int main() {
    int num, antecessor, sucessor;
    printf("Digite um numero: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("Antecessor: %d\nSucessor: %d", antecessor, sucessor);

    return 0;
}