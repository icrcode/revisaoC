#include <stdio.h>

int main() {
    char nome[100];
    float salarioBruto, inss, salarioLiquido;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    inss = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - inss;

    printf("Nome do Funcionario: %s\n", nome);
    printf("Salario bruto: %.2f\n", salarioBruto);
    printf("Valor do INSS: %.2f\n", inss);
    printf("Salario liquido: %.2f\n", salarioLiquido);

    return 0;
}
