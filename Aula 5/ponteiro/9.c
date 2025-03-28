#include <stdio.h>
#include <stdlib.h>

// Exemplo: Notas de um aluno

int main() {

    int qtdNotas;
    printf("Informe a quantidade de notas: ");
    scanf("%d", &qtdNotas);

    float *notas = (float *) malloc(qtdNotas * sizeof(float));

    for (int i = 0; i < qtdNotas; i++) {
        printf("Informe a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < qtdNotas; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    // Exercício: 

    return 0;
}