#include <stdio.h>
#include <string.h>

void sorteador(char *strings[], int tamanho) {

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (strlen(strings[j]) > strlen(strings[j + 1])) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *strings[] = {
            "Algo",
            "AlgumaCoisa",
            "OutraCoisa"
    };

    int tamanho = sizeof(strings) / sizeof(strings[0]);

    sorteador(strings, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Quantidade de caracteres na string %d: %lu\n", i + 1, strlen(strings[i]));
    }

    return 0;
}