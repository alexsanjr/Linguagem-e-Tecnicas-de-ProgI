#include <stdio.h>
#include <string.h>

#define TAM 10
#define MEDIA_MIN 5

struct aluno {
    char nome[30];
    char matricula[10];
    float mediaFinal;
};

void transferirDados(struct aluno atual[], struct aluno novo[], int i, int j) {
    strcpy(novo[j].nome, atual[i].nome);
    strcpy(novo[j].matricula, atual[i].matricula);
    novo[j].mediaFinal = atual[i].mediaFinal;
}

void imprimirDados(struct aluno dados[]) {
    int i;
    for (i = 0 ; i < TAM; i++) {
        if (strlen(dados[i].nome))
            printf("%s %s %.2f\n", dados[i].nome, dados[i].matricula, dados[i].mediaFinal);
        else 
            break;  
    }
    printf("\n");
}

int main() {
    int i, j;
    struct aluno a[TAM]; 
    struct aluno aprovados[TAM];
    struct aluno reprovados[TAM];

    for (i = 0 ; i < TAM; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Digite o nome: ");
        gets(a[i].nome);
        printf("Digite a matricula: ");
        gets(a[i].matricula);
        printf("Digite a media final: ");
        scanf("%f", &a[i].mediaFinal);
        getchar();
    }

    // limpar vetor dos valores default da memória
    for (i = 0 ; i < TAM; i++) {
        strcpy(aprovados[i].nome, "\0");
        strcpy(reprovados[i].nome, "\0");
    }

    for (i = 0 ; i < TAM; i++) {
        if (a[i].mediaFinal < MEDIA_MIN) {
            for (j = 0; j < TAM; j++) {
                if (!strlen(reprovados[j].nome)) {
                    transferirDados(a, reprovados, i, j);   
                    break;
                }
            }
        } else {
            for (j = 0; j < TAM; j++) {
                if (!strlen(aprovados[j].nome)) {
                        transferirDados(a, aprovados, i, j);    
                        break;
                }
            }
        }
    }

    printf("Aprovados:\n");
    imprimirDados(aprovados);

    printf("Reprovados:\n");
    imprimirDados(reprovados);
    
    return 0;
}
