#include <stdio.h>

int main() {

    // Declaração de um array que armazena 5 inteiros
    int numeros[5];

    // Inicialização de um array que armazena 5 inteiros
    int numeros[5] = {1, 2, 3, 4, 5};

    int numeros[5] = {0};

    // Acesso a elementos
    int primeiro = numeros[0]; // O primeiro elemento está na posição zero

    // Manipulação de elementos
    numeros[2] = 7; 

    // Usando um laço para preencher um array
    for (int i = 0; i < 5; i++) {
        int numero;
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    // Usando um laço para imprimir os elementos do array
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}