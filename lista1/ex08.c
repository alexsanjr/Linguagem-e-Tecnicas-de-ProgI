#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9*celsius + 160)/5;

    printf("Temperatura em Fahrenheit: %.1f", fahrenheit);
    return 0;
}