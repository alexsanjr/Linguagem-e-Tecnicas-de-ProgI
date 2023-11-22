#include <stdio.h>
#include <string.h>

#define TAM_NOTAS 2
#define TAM_TURMA 10

struct aluno {
    int matricula;
    char nome[30];
    char codigoDisciplina[10];
    float notas[TAM_NOTAS];
};

float calculaMedia(float notas[TAM_NOTAS]);

int main() {
    int i, j;
    float medias[TAM_TURMA];

    struct aluno a[TAM_TURMA];

    for (i = 0; i < TAM_TURMA; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Digite a matricula: ");
        scanf("%d", &a[i].matricula);

        getchar();
        printf("Digite o nome: ");
        gets(a[i].nome);

        printf("Codigo da disciplina: ");
        gets(a[i].codigoDisciplina);

        for (j = 0; j < TAM_NOTAS; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &a[i].notas[j]);
        }
        printf("\n");
    }

    for (i = 0; i < TAM_TURMA; i++) {
        medias[i] = calculaMedia(a[i].notas);
    }

    for (i = 0; i < TAM_TURMA; i++) {
        printf("Matricula: %d | Nome: %s | Disciplina: %s | Media: %.2f\n",
               a[i].matricula, a[i].nome, a[i].codigoDisciplina,medias[i]);

    }

    return 0;
}

float calculaMedia(float notas[TAM_NOTAS]) {
    int i;
    float soma = 0, pesos[] = {1, 2};

    for (i = 0; i < TAM_NOTAS; i++) {
        soma += notas[i] * pesos[i];
    }

    return soma / (pesos[0] + pesos[1]);
}
