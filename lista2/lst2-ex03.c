#include <stdio.h>

int main() {

    int ano;
    int anoAtual = 2023;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        if (ano < anoAtual) {
            printf("Foi bissexto!");
        } else if ( ano > anoAtual) {
            printf("Sera bissexto!");
        } else {
            printf("Eh bissexto");
        }
    } else {
        if (ano < anoAtual) {
            printf("Nao foi bissexto!");
        } else if ( ano > anoAtual) {
            printf("Nao sera bissexto!");
        } else {
            printf("Nao eh bissexto");
        }
    }
    return 0;
}