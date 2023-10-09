#include <stdio.h>

int main() {
    int estoque, solicitados;

    printf("Ha quantos produtos em estoque? ");
    scanf("%d", &estoque);

    printf("Quantos produtos sao solicitados pela fabrica? ");
    scanf("%d", &solicitados);

    if(estoque >= solicitados) {
        estoque -= solicitados;
        printf("Estoque atualizado: %d itens", estoque);
    } else {
        printf("Nao ha item suficiente em estoque para atender o pedido");
    }

    return 0;
}