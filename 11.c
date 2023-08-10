#include <stdio.h>

int main() {
    int multiplosDe8 = 0;

    for (int i = 0; i <= 50; i++) {
        if (i % 8 == 0) {
            multiplosDe8++;
            printf("Ocorrencia %d: %d (Multiplo de 8)\n", multiplosDe8, i);
        }
    }

    printf("Quantidade de multiplos de 8: %d\n", multiplosDe8);

    return 0;
}
