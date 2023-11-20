#include <stdio.h>
#include <string.h>
#define TAM 5
#define TAM_NOTAS 3
#define MIN_APROV 6

struct aluno {
    char nome[99];
    int numeroMatricula;
    float notas[TAM_NOTAS];
};

int main() {
    int i, j, maiorMediaPosicao, menorMediaPosicao;
    float mediasTotais[TAM], nota, maiorNotaP1 = 0, maiorMedia = 0, menorMedia = 0;
    struct aluno a[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite o nome: ");
        gets(a[i].nome);
        printf("Digite o numero de matricula: ");
        scanf("%d", &a[i].numeroMatricula);
        for (j = 0; j < TAM_NOTAS; j++) {
            printf("Digite a nota da prova %d: ", j + 1);
            scanf("%f",&a[i].notas[j]);
        }
        getchar();
    }
    printf("\n");

    // Descobrir aluno com maior nota da primeira prova
    for (i = 0; i < TAM; i++) {
        if (maiorNotaP1 < a[i].notas[0]) 
            maiorNotaP1 = a[i].notas[0];
    }
    
    // fazer as médias
    for (i = 0; i < TAM; i++) {
        nota = 0;
        for (j = 0; j < TAM_NOTAS; j++) {
            nota += a[i].notas[j];
        }
        mediasTotais[i] = nota/TAM_NOTAS;
    }

    // Encontrar aluno com maior e menor média dentro do vetor de médias
    for (i = 0; i < TAM; i++) {
        if (maiorMedia < mediasTotais[i]) {
            maiorMedia = mediasTotais[i];
            maiorMediaPosicao = i;
        }

        if (i == 0) {
            menorMedia = mediasTotais[i];
        }

        if (menorMedia > mediasTotais[i]) {
            menorMedia = mediasTotais[i];
            menorMediaPosicao = i;
        }
    }

    // imprimir aprovados e reprovados
    for (i = 0; i < TAM; i++) {
        printf("%s nota: %.2f ", a[i].nome, mediasTotais[i]);
        if (mediasTotais[i] >= 6)
            printf("Aprovado!\n");
        else
            printf("Reprovado!\n");
    }

    // imprimir maior e menor média
    printf("Maior media: ");
    printf("%s media= %.2f\n", a[maiorMediaPosicao].nome, mediasTotais[maiorMediaPosicao]);
    printf("Menor media: ");
    printf("%s media= %.2f\n", a[menorMediaPosicao].nome, mediasTotais[menorMediaPosicao]);
    
    return 0;
}
