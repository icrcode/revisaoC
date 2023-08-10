#include <stdio.h>

int main() {
    int valor;
    int somaPar = 0, somaImpar = 0;

    for (valor = 0; valor <= 200; valor++) {
        if (valor % 2 == 0) {
            somaPar += valor;
        } else {
            somaImpar += valor;
        }
    }

    printf("Soma dos valores pares: %d\n", somaPar);
    printf("Soma dos valores Impares: %d\n", somaImpar);

    return 0;
}
