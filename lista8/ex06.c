#include <stdio.h>
#include <string.h>

struct funcionario {
    char nome[30];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[10];
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    struct funcionario f;

    printf("Escreva o seu primeiro nome: ");
    gets(f.nome);

    printf("Escreva sua idade: ");
    scanf("%d", &f.idade);
    getchar();

    do {
        printf("digite o seu sexo (M/F): ");
        scanf("%c", &f.sexo);
        getchar();
    } while (!(f.sexo == 'm' || f.sexo == 'M' || f.sexo == 'f' || f.sexo == 'F'));

    printf("Digite seu cpf: ");
    gets(f.cpf);

    printf("Digite sua data de aniversario no padrao (dd/MM/aaaa): ");
    gets(f.dataNascimento);

    do {
        printf("Codigo do seu setor: ");
        scanf("%d", &f.codigoSetor);
        getchar();
    } while (f.codigoSetor < 0 || f.codigoSetor > 99);

    printf("Digite seu cargo: ");
    gets(f.cargo);

    printf("Digite seu salario: ");
    scanf("%f", &f.salario);

    printf("%s", f.cpf);

    printf("\n%s %d anos - Sexo: %c\nCpf: %s | Data de Nascimento: %s\n"
           "Codigo do setor: %d | Cargo: %s | Salario: %.2f",
           f.nome, f.idade, f.sexo, f.cpf, f.dataNascimento, f.codigoSetor, f.cargo, f.salario);

    return 0;
}
