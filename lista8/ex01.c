#include <stdio.h>
#include <string.h>

struct horario {
    int hora, minutos, segundos;
};

struct data {
    int dia, mes, ano;
};

struct compromisso {
    struct data data;
    struct horario horario;
    char descricao[99];
};

int main() {
    struct compromisso c;

    c.data.ano = 2023;
    c.data.mes = 10;
    c.data.dia = 31;

    c.horario.hora = 19;
    c.horario.minutos = 20;
    c.horario.segundos = 15;

    strcpy(c.descricao, "Dia e horario da festa de halloween");

    printf("Compromisso:\nData: %d/%d/%d - %d:%d:%d\n", c.data.dia, c.data.mes, c.data.ano, c.horario.hora,
    c.horario.minutos, c.horario.segundos);
    printf("Descricao: %s", c.descricao);
    
    return 0;
}
