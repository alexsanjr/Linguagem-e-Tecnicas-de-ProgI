#include <stdio.h>
#include <string.h>
#define TAM 5

struct aluno {
    char nome[99], curso[99];
    int numeroMatricula;
};

int main() {
    int i;
    struct aluno a[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite o nome: ");
        gets(a[i].nome);
        printf("Digite o numero de matricula: ");
        scanf("%d", &a[i].numeroMatricula);
        getchar();
        printf("Digite o nome do curso: ");
        gets(a[i].curso);
    }
    
    for (i = 0; i < TAM; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s | Numero de Matricula: %d | Nome do curso: %s\n", 
        a[i].nome, a[i].numeroMatricula, a[i].curso);
    }

    return 0;
}
