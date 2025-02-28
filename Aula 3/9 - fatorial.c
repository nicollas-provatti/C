#include <stdio.h>

int fatorial(int numero) {

    if (numero == 0 || numero == 1) {
        return 1;
    }

    int resultado = numero * fatorial(numero - 1);

    return resultado;
}

int main() {

    printf("%d\n", fatorial(3));

    return 0;
}