#include <stdio.h>

int main() {
    int a,b,r;
    a = 2;
    b = 1;
    printf("Os valores das variaveis sao: %i %i\n",a, b);
    r = a + b;
    printf("Resultado: %i\n", r);
    printf("A diferenca entre a elas e: %i\n", a - b);

    r = a * 2 + b * 3;
    printf("Resultado %i\n", r);

    r = a * b;
    printf("a multiplicacao delas e: %i\n", r);

    return 0;
}
