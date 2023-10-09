#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite 3 numeros reais no formato: num num num(entre espacos): ");
    scanf("%f %f %f",&a, &b, &c);

    if(a <= b) {
        float i;
        i = a;
        a = b;
        b = i;
    }

    if(a <= c) {
        float i;
        i = a;
        a = c;
        c = i;
    }

    if(a >= b + c) {
        printf("Nao e formado nenhum triângulo");
    } else if(a*a == (b*b) + (c*c)) {
        printf("O Triangulo é retangulo");
    }

    return 0;
}