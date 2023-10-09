#include <stdio.h>

int main() {
    int valor;

    printf("Escolha(1-Quadrado | 2-Retangulo | 3-Trapezio): ");
    scanf("%d", &valor);

    switch (valor) {
        float l, h, b1, b2, area;
        case 1:
            printf("Digite o valor de l (lado): ");
            scanf("%f", &l);
            area = l * l;

            printf("A area do quadrado eh de: %.3f", area);
            break;
        case 2:

            printf("Digite respectivamente o valor da base e da altura no padrao (b h) com espaco: ");
            scanf("%f %f", &b1, &h);
            area = b1 * h;

            printf("A area do retangulo eh de: %.3f", area);
            break;
        case 3:
            printf("Digite respectivamente o valor da base menor, base maior e "
                   "altura no padrao(b b h) com espaco: ");
            scanf("%f %f %f", &b1, &b2, &h);
            area = (b1 + b2) * h/2;
            printf("A area do trapezio eh de: %.3f", area);
            break;
        default:
            printf("Nenhum valor foi encontrado para determinar o tipo de geometria");
    }

    return 0;
}