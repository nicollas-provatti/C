#include <stdio.h>

int main() {
    // Declaração de uma matriz 2 x 2 (linhas x colunas)
    int numeros[2][2];

    // Inicialização de uma matriz
    int numeros[2][2] = {{1, 2}, {3, 4}};

    int numeros[2][2] = {
        {1, 2},
        {3, 4}
    };

    int numeros[2][2] = {0};

    // Acesso a elementos
    int primeiro  = numeros[0][0];

    // Manipulação de elementos
    numeros[1][1] = 6; // Elemento da segunda linha e segunda coluna


    // Usando um laço para preencher a matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int numero;
            scanf("%d", &numero);
            numeros[i][j] = numero;
        }
    }

    // Usando um laço para imprimir os elementos da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    return 0;
}

