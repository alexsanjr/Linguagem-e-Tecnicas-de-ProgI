#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char str[100], str2[100];

    printf("Digite uma palavra: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        str2[i] = str[strlen(str) - (i + 1)];
    }

    for (i = 0; i < strlen(str2); i++) {
        printf("%c", str2[i]);
    }

    return 0;
}