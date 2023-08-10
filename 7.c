#include <stdio.h>

int main() {
    int base, expoente;
    long long resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("O valor da potencia e: %lld\n", resultado);

    return 0;
}
