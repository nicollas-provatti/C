#include <stdio.h>

int main() {
    int x = 5, y;

    printf("Valor inicial de x: %d\n\n", x);

    // Incremento pós-fixado (usa o valor atual e depois incrementa)
    y = x++;
    printf("Usando x++ (pós-fixado):\n");
    printf("y recebe o valor de x antes do incremento -> y = %d\n", y);
    printf("Depois do incremento, x = %d\n\n", x);

    // Incremento pré-fixado (incrementa primeiro e depois usa o novo valor)
    x = 5;  // Resetando x
    y = ++x;
    printf("Usando ++x (pré-fixado):\n");
    printf("x é incrementado antes de ser atribuído a y -> x = %d\n", x);
    printf("y recebe o novo valor de x -> y = %d\n\n", y);

    // Decremento pós-fixado (usa o valor atual e depois decrementa)
    x = 5;  // Resetando x
    y = x--;
    printf("Usando x-- (pós-fixado):\n");
    printf("y recebe o valor de x antes do decremento -> y = %d\n", y);
    printf("Depois do decremento, x = %d\n\n", x);

    // Decremento pré-fixado (decrementa primeiro e depois usa o novo valor)
    x = 5;  // Resetando x
    y = --x;
    printf("Usando --x (pré-fixado):\n");
    printf("x é decrementado antes de ser atribuído a y -> x = %d\n", x);
    printf("y recebe o novo valor de x -> y = %d\n", y);

    return 0;
}
