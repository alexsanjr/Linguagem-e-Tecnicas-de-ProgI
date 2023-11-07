#include <stdio.h>

#define LINHA 5
#define COLUNA 10

int main() {
	
	int i, j,aux = 0, resultado[COLUNA], count = 0;
	char mat[LINHA][COLUNA], vect[COLUNA];
	
	for (i = 0; i < LINHA; i++) {
		for (j = 0; j < COLUNA; j++) {
			while (aux == 0) {	
				printf("\nDigite as alternativas marcadas pelo aluno %d (%d/%d): ", i + 1, j + 1, COLUNA);
				scanf("%c", &mat[i][j]);
				getchar();
				
				if (mat[i][j] == 'a' || mat[i][j] == 'b' || mat[i][j] == 'c' || mat[i][j] == 'd')
					aux = 1;
			}
			aux = 0;
		}
	}
	
	
	for (i = 0; i < COLUNA; i++) {
		while (aux == 0) {	
				printf("\nDigite o gabarito (%d/%d): ", i + 1, COLUNA);
				scanf("%c", &vect[i]);
				getchar();
				
				if (vect[i] == 'a' || vect[i] == 'b' || vect[i] == 'c' || vect[i] == 'd')
					aux = 1;
		}
		aux = 0;
	}
	
	
	for (i = 0; i < LINHA; i++) {
		for (j = 0; j < COLUNA; j++) {
			if (mat[i][j] == vect[j])
				count++;
		}
		resultado[i] = count;
		count = 0;
	}
	
	for (i = 0; i < COLUNA; i++) {
		printf("%d", resultado[i]);
	}
	
	return 0;
}
