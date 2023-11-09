#include <stdio.h>
#include <string.h>

int main() {
    int i, avalia;
    char str1[100], str2[100];

    printf("Digite uma string: ");
    gets(str1);
    printf("Digite um string para comparacao: ");
    gets(str2);

    if (strlen(str1) == strlen(str2)) {
        for (i = 0; i < strlen(str1); i++) {
            if (str1[i] != str2[i]) {
                avalia = 1;
                break;
            } else avalia = 0;
        }
    } else avalia = 1;

    if (avalia == 1)
        printf("As duas strings nao sao iguais!");
    else
        printf("As duas strings sao iguais!");

    return 0;
}