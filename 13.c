#include <stdio.h>
#include <math.h>

int main() {
    double taxaMensal = 0.0125; //mes
    int periodoEmMeses = 12; // ano
    double valorInicial = 1000.0;
    double valorFinal;

    double taxaAnual = taxaMensal * 12;

    valorFinal = valorInicial * pow(1 + taxaMensal, periodoEmMeses);

    printf("Taxa anual equivalente: %.2lf%%\n", taxaAnual * 100);
    printf("Valor final apos um ano: %.2lf\n", valorFinal);

    return 0;
}
