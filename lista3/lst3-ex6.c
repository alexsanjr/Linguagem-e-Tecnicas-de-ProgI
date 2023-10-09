#include <stdio.h>

int main() {
    char info = 's';
    int count = 0;
    float nota1, nota2, nota3, mediaAtual, mediaMaior = 0, mediaMenor = 0, totalMedia = 0, mediaArit;

    while (info == 's') {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        mediaAtual = (nota1 + nota2 + nota3) / 3;
        totalMedia += mediaAtual;
        printf("Media do aluno atual: %.2f", mediaAtual);

        printf("\nDeseja continuar? s/n(minusculo) ");
        scanf("%s", &info);

        if (count == 0) {
            mediaMenor = mediaAtual;
        }

        if (mediaAtual > mediaMaior) {
            mediaMaior = mediaAtual;
        } else if (mediaAtual < mediaMenor) {
            mediaMenor = mediaAtual;
        }
        count++;
    }

    mediaArit = totalMedia / count;

    printf("Maior media: %.2f\nMenor media: %.2f\nMedia aritmetica de todas as medias: %.2f"
           , mediaMaior, mediaMenor, mediaArit);
    return 0;
}