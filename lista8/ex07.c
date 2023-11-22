#include <stdio.h>

#define TAM 2

struct numComplexo {
    float parteReal;
    float numImaginario;
};

int main() {
    int i;
    struct numComplexo n[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Digite o numero complexo no padrao a bi (%d/%d): ", i + 1, TAM);
        scanf("%f %fi",&n[i].parteReal, &n[i].numImaginario);
    }
    // 2 + 3i
    //5 - 4i

    struct numComplexo soma;
    soma.parteReal = n[0].parteReal + n[1].parteReal;
    soma.numImaginario = n[0].numImaginario + n[1].numImaginario;

    struct numComplexo sub;
    sub.parteReal = n[0].parteReal - n[1].parteReal;
    sub.numImaginario = n[0].numImaginario - n[1].numImaginario;

    struct numComplexo prod;
    prod.parteReal = (n[0].parteReal * n[1].parteReal) - (n[0].numImaginario * n[1].numImaginario);
    prod.numImaginario = (n[0].parteReal * n[1].numImaginario) + (n[0].numImaginario * n[1].parteReal);

    printf("Soma: %.2f %.2fi\n", soma.parteReal, soma.numImaginario);
    printf("Subtração: %.2f %.2fi\n", sub.parteReal, sub.numImaginario);
    printf("Produto: %.2f %.2fi", prod.parteReal, prod.numImaginario);

    return 0;
}