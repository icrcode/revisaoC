#include <stdio.h>
#include <math.h>

int main() {
    double taxa_mensal = 0.0125;
    double taxa_anual;

    taxa_anual = pow(1 + taxa_mensal, 12) - 1;

    printf("Taxa de juros composto equivalente anual: %.2lf%%\n", taxa_anual * 100);

    double principal = 1000.0;
    double montante;

    montante = principal * pow(1 + taxa_mensal, 12);

    printf("Valor final após um ano: R$ %.2lf\n", montante);

    return 0;
}