#include <stdio.h>

#define PI 3.14

int main() {
    int valor;
    float raio, area, perimetro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    printf("Digite o raio de uma circunferencia: ");
    scanf("%f", &raio);

    switch (valor) {
        case 1:
            area = PI * raio * raio;
            printf("A area de %.3f eh de %.3f", raio ,area);
            break;
        case 2:
            perimetro = 2.0 * PI * raio;
            printf("O perimetro de %.3f eh de %.3f", raio, perimetro);
            break;
        default:
            printf("O indicador da funcao foi mal fornecido");
    }
    return 0;
}