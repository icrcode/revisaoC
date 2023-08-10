#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero1 inteiro: ");
    scanf("%d", &numero2);

    printf("Valor do primeiro numero: %d\n", numero1);
    printf("Valor do segundo numero: %d\n", numero2);

    if (numero1 > numero2) {
        printf("O primeiro numero e maior: %d\n", numero1);
    } else if (numero2 > numero1) {
        printf("O segundo numero e maior: %d\n", numero2);
    } else {
        printf("Os numeros são iguais.\n");
    }

    return 0;
}
