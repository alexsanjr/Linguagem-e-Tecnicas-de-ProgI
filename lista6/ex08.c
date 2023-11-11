#include <stdio.h>
#include <string.h>

int main() {

    int i, ascii;
    char str[100];

    printf("Escreva uma cadeia de caracteres: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }

    for (i = 0; i < strlen(str); i++)
        printf("%c", str[i]);

    return 0;
}
