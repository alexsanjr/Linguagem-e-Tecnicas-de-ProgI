#include <stdio.h>
#include <string.h>

int main() {

    int i, count = 0;
    char str[100], carac = 'Y';

    printf("Digite uma palavra: ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
        if (str[i] == 'a' || str[i] == 'e'  || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E'  || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
            str[i] = carac;

    }

    printf("A palavra contem: %d vogais\n", count);
    printf("Substituindo as vogais por '%c': ", carac);

    for (i = 0; i < strlen(str); i++)
        printf("%c", str[i]);


    return 0;
}