#include <stdio.h>

// Problema: Ler e armazenar as notas de um aluno. Informar o valor da média

// Solução 3: Usando array
int main() {

    float notas[6];

    notas[0] = 5.5;
    notas[1] = 7.8;
    notas[2] = 9.7;
    notas[3] = 8.5;
    notas[4] = 5.6;
    notas[5] = 7.6;

    float media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4] + notas[5]) / 6.0;

    printf("Sua média é %.2f\n", media);

    return 0;
}

// Observação da solução 3: O tamanho do array é sempre estático.