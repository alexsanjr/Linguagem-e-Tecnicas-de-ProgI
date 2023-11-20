#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[99], endereco[99];
    int idade;
};

int main() {
    struct pessoa p;

    printf("Digite seu nome: ");
    gets(p.nome);
    printf("Digite seu endereco: ");
    gets(p.endereco);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    printf("Nome: %s\nEndereco: %s\nIdade: %d ", p.nome, p.endereco, p.idade);

    return 0;
}
