#include <stdio.h>

int verificaNumero( int num) {
    if ( num > 0)
        return 1;
    else if ( num < 0)
        return -1;
    else
        return 0;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("%d", verificaNumero(num));

    return 0;
}
