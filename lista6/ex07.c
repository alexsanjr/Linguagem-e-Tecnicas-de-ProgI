#include <stdio.h>
#include <string.h>

int main() {

    int i, ascii;
    char str[50];

    printf("Escreva uma palavra(maximo de 50 letras): ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
        str[i]++;

    for (i = 0; i < strlen(str); i++)
        printf("%c", str[i]);

    return 0;
}
