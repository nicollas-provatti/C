#include <stdio.h>

int main() {

    // Exemplo 1
    int a = 10;
    int b = 20;

    int maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    // Exemplo 2
    int n1 = 5;

    n1 % 2 == 0 ? printf("eh par!\n") : printf("eh ímpar\n");

    return 0;
}