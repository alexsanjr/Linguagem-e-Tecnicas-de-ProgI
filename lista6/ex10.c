#include <stdio.h>
#include <string.h>

int main() {

    int i, j = 0, count = 0;
    char str[100], str2[100], str3[100];

    printf("Digite uma palavra ou frase, em minusculo, para descobrir se eh um palindrono: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.') {
            count++;
            j = 1 * count;
        } else {
            str2[i - j] = str[i];
        }
    }

    for (i = 0; i < strlen(str2); i++)
        str3[i] = str2[strlen(str2) - (i + 1)];


    if (strcmp(str2, str3) == 0)
        printf("E um palindrono!");
    else
        printf("Nao e um palindrono!");

    return 0;
}