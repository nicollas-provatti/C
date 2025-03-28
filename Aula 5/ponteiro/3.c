#include <stdio.h>

int main() {

    int numero = 10;

    int *ptr = &numero;

    printf("numero(endereco): %p\n", &numero);
    printf("ptr(valor)      : %p\n\n", ptr);

    printf("numero(valor): %d\n", numero);
    printf("*ptr(valor)  : %d\n\n", *ptr);

    *ptr = 20;

    printf("numero(valor): %d\n", numero);
    printf("*ptr(valor)  : %d\n", *ptr);

    return 0;
}