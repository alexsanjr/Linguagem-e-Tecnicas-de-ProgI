#include <stdio.h>
#include <string.h>

#define TAM 2

struct pessoa {
    char nome[99];
    char endereco[99];
    char telefone[8];
};

void bubbleSort (struct pessoa p[], int n, int ordem[]) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (strcmp(p[j].nome, p[j + 1].nome) > 0) {
                aux = j;
                ordem[j] = ordem[j + 1];
                ordem[j + 1] = aux;
            }
        }
    }
}

int main() {
    int i, j, k;
    struct pessoa p[TAM];
    int ordem[TAM];

    for (i = 0; i < TAM; i++) {
        ordem[i] = i;
    }

    for (i = 0; i < TAM; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Digite o nome: ");
        gets(p[i].nome);
        printf("Digite o endereco: ");
        gets(p[i].endereco);
        printf("Digite o telefone: ");
        gets(p[i].telefone);
    }

    bubbleSort(p, TAM, ordem);

    for (i = 0; i < TAM; i++) {
        printf("Nome: %s | Endereco: %s | Telefone: %s\n",
               p[ordem[i]].nome, p[ordem[i]].endereco, p[ordem[i]].telefone);
    }

    return 0;
}
