#include <stdio.h>

int main() {
    int i;

    printf("Tabuada do 2:\n");
    for (int i = 1; i <= 10; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
    }

    printf("\nTabuada do 3:\n");
    for (int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
    }

    printf("\nTabuada do 5:\n");
    for (int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}
