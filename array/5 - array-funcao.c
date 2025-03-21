#include <stdio.h>

void ler_array(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
      scanf("%d", &numeros[i]);
    }
}

void imprimir_array(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main() {
    int numeros[10];
    int tam = 10;
    int n = sizeof(numeros) / sizeof(numeros[0]);

    ler_array(numeros, tam);
    imprimir_array(numeros, n);

    return 0;
}