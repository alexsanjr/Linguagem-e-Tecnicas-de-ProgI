#include <stdio.h>

int verificaPar(int num) {
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("%d", verificaPar(num));

    return 0;
}
