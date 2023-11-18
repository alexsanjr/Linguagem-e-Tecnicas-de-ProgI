#include <stdio.h>
#include <math.h>
#define TAM 3

float mediaNotas (float *notas, char letra) {
    int i, somaP = 0, vpond[] = {5, 3, 2};
    float soma, pond = 0.0;
   
    if (letra == 'A') {
        soma = 0.0;
        for (i = 0; i < TAM; i++) 
            soma += notas[i];
        return soma / TAM;
    } else if (letra == 'P') {
        for (i = 0; i < TAM; i++) {
            pond += vpond[i] * notas[i];
            somaP += vpond[i];
        }
        return pond / somaP;
    } else {
        soma = 0.0;
        for (i = 0; i < TAM; i++) {
            soma += pow(notas[i], -1);
        }
        return TAM / soma;
    }
}

int main() {
    int i;
    float notas[TAM];
    char letra;

    for (i = 0; i < TAM; i++) {
        printf("Digite a sua nota (%d/%d): ", i + 1, TAM);
        scanf("%f", &notas[i]);

        if (notas[i] < 0) {
            printf("Digite uma nota valida!");
            i--;
        }
    }
    getchar();

    printf("Escolha o tipo de media A-Aritmetica P- Ponderada H- Harmonica: ");
    scanf("%c", &letra);

    // passa as letras minúsculas para maíscula
    if (letra == 'a' || letra == 'p' || letra == 'h') 
        letra -= 32;
    
    printf("Media do aluno: %.2f", mediaNotas(notas, letra));

    return 0;
}
