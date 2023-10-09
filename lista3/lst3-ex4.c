#include <stdio.h>
#define TEMPO 50

int main() {
    float massaInicial, massaFinal = 1;
    int segundos = 0;
    int horas, minutos;

    printf("Digite a massa(em gramas) do material radioativo: ");
    scanf("%f", &massaInicial);
    massaFinal = massaInicial;

    while (massaFinal >= 0.5) {
        massaFinal /= 2.0;
        segundos += TEMPO;
    }
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;

    printf("Massa inicial: %.3fg\nMassa Final: %.3fg\nTempo total: %dh %dmin %ds",
           massaInicial, massaFinal, horas, minutos, segundos);

    return 0;
}