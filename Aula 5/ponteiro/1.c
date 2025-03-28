#include <stdio.h>

int main() {

    // DEFINIÇÃO
    int numero = 10;

    printf("numero(valor): %d\n", numero);
    printf("numero(endereco): %p\n\n", &numero);

    int *ptr = &numero;

    printf("ptr(valor): %p\n", ptr);
    printf("ptr(endereco): %p\n", &ptr);

    return 0;
}