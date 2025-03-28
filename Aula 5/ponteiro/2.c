#include <stdio.h>

int main() {

    int numero = 10;

    // Declaração
    int *ptr1;
    ptr1 = &numero;

    // Inicialização 
    int *ptr2 = &numero;
    int *ptr3 = NULL; // boa prática

    int numero = 10;

    int *ptr1;
    ptr1 = &numero;

    int *ptr2 = &numero;
    int *ptr3 = NULL; 

    return 0;
}