#include <stdio.h>

int main() {
    char nome[100];
    float salarioBruto, inss, salarioLiquido;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto <= 1000.0) {
        inss = salarioBruto * 0.08;
    } else if (salarioBruto <= 1500.0) {
        inss = salarioBruto * 0.085;
    } else {
        inss = salarioBruto * 0.09;
    }

    salarioLiquido = salarioBruto - inss;

    printf("Nome do Funcionario: %s\n", nome);
    printf("Salario bruto: %.2f\n", salarioBruto);
    printf("Taxa de desconto de INSS: %.2f%%\n", inss / salarioBruto * 100);
    printf("Valor do desconto de INSS: %.2f\n", inss);
    printf("Salario liquido: %.2f\n", salarioLiquido);

    return 0;
}
