#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite um numero inteiro para a: ");
    scanf("%d", &a);
    printf("Digite um numero inteiro para b: ");
    scanf("%d", &b);

    i = a;
    a = b;
    b = i;

    printf("\nValores invertidos!\n");
    printf("Valor de a = %d\n", a);
    printf("Valor de b = %d", b);
    return 0;
}