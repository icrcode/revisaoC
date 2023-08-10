
#include <stdio.h>

int main() {
    int primeiro = 1, segundo = 2, proximo;

    printf("Os 10 primeiros termos da série de Fibonacci:\n");

    printf("%d ", primeiro);
    printf("%d ", segundo);

    for (int i = 3; i <= 10; i++) {
        proximo = primeiro + segundo;
        printf("%d ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}
