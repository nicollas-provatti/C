#include <stdio.h>

void imprimir(int numero) {
    
    if (numero == 0) {
        printf("%d ", numero);
    }
    else {
        printf("%d ", numero); 
        imprimir(numero - 1);
        printf("%d ", numero);
    }
}

int main() {

    imprimir(5);
    printf("\n");

    return 0;
}