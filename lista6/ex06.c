#include <stdio.h>
#include <string.h>

int main() {

    int i, j = 0, count = 0;
    char str[100], str2[100];



    printf("Digite uma frase: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            count++;
            j = 1 * count;
        } else {
            str2[i - j] = str[i];
        }
    }

    for (i = 0; i < strlen(str2); i++) {
        printf("%c", str2[i]);
    }

    return 0;
}