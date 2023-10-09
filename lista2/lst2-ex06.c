#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Digite sua altura em metros(m): ");
    scanf("%f", &altura);

    printf("Digite o seu peso em quilos(kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc <= 18.5) {
        printf("Abaixo do peso normal. Valor do IMC: %.3f", imc);
    } else if (imc > 18.5 && imc <= 25) {
        printf("Peso normal. Valor do IMC: %.3f", imc);
    } else if (imc > 25 && imc <= 30) {
        printf("Peso acima do normal. Valor do IMC: %.3f", imc);
    } else {
        printf("Peso excessivo. Valor do IMC: %.3f", imc);
    }
    return 0;
}