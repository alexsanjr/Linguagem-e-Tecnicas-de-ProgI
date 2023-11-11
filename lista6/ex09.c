#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char str[100];

    printf("Digite uma frase em minusculo: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 97 && str[i] < 120)
            str[i] += 3;
        else if (str[i] >= 120 && str[i] <= 122)
            str[i] = str[i] + 3 - 26;
    }

    for (i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    return 0;
}

