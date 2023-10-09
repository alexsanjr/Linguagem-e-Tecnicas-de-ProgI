#include <stdio.h>

int main() {
    int segundos, minutos2, segundos2, horas2;
    float horas, minutos;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = (float)segundos / 60;
    horas = (float)segundos / 3600;
    horas2 = (int)horas;

    minutos2 = (segundos % 3600) / 60;
    segundos2 = (segundos % 3600) % 60;

    printf("Tempo total: %dh %dmin %ds \n", horas2, minutos2, segundos2);
    printf("Tempo total em horas: %.3f\n", horas);
    printf("Tempo total em minutos: %.3f", minutos);

    return 0;
}