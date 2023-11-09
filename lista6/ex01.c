#include <stdio.h>
#include <string.h>

#define NUM 4

int main() {
    int i;
    char string[100];

    printf("Digite um nome: ");
    gets(string);

    printf("Imprimindo as %d primeiras letras do nome...\n", NUM);

    if (strlen(string) <= NUM - 1) {
        for (i = 0; i < strlen(string); i++) {
            if (string[i] != '\0')
                printf("%c\n", string[i]);
        }
    } else {
        for (i = 0; i < NUM; i++) {
            printf("%c\n", string[i]);
        }
    }




    return 0;



}