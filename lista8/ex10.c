#include <stdio.h>
#include <string.h>

#define TAM 5

struct carro {
    char marca[15];
    int ano;
    float preco;
};

int main() {
    int i;
    float p;
    struct carro c[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Digite a marca: ");
        gets(c[i].marca);
        printf("Digite o ano do carro: ");
        scanf("%d", &c[i].ano);
        printf("Digite o preco do carro: ");
        scanf("%f", &c[i].preco);
        getchar();
    }

    printf("Digite um preco de comparacao (ou 0 para sair do programa): ");
    scanf("%f", &p);

    while (p > 0) {
        printf("Carros com preco menor que %.2f:\n", p);
        for (i = 0; i < TAM; i++) {
            if (c[i].preco < p) 
                printf("%s %d R$%.2f\n", c[i].marca, c[i].ano, c[i].preco);
        } 
        printf("\n");
        printf("Digite um preco de comparacao (ou 0 para sair do programa): ");
        scanf("%f", &p);
    }
    
    return 0;
}