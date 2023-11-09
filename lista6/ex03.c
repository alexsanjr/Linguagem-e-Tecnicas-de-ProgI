#include <stdio.h>
#include <string.h>

#define NUM '1'

int main() {
    int i, count = 0;
    char str[100];

    printf("Digite uma sequencia de numeros: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == NUM)
            count++;

    }
    printf("Quantidades de %c na sequencia: %d", NUM, count);

    return 0;
}