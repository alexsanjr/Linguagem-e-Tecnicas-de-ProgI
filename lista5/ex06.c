#include <stdio.h>

#define TAMANHO 4

int main() {
	
	int i, j, maior, linha, coluna, mat[TAMANHO][TAMANHO];
	
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {
			printf("Digite um numero inteiro para acrescentar na matriz: ");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {
			if (i == 0 && j == 0) {
				maior = mat[i][j];
				linha = i;
				coluna = j;	
			} else if (mat[i][j] > maior) {
				maior = mat[i][j];
				linha = i;
				coluna = j;
			}
		}
	}
	
	printf("O maior valor eh: %d. Localizado na Linha: %d e na Coluna: %d", maior, linha + 1, coluna + 1);
	
	
	
	return 0;
}
