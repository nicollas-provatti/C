#include <stdio.h>

// Passagem por valor e referência

void valor(int numero) {
    numero++;
}

void referencia(int *numero) {
    (*numero)++;
}

int main() {

    int numero = 10;
    valor(numero);
    printf("%d\n", numero); // 10 

    referencia(&numero);
    printf("%d\n", numero); // 11

    return 0;
}

