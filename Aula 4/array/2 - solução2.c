#include <stdio.h>

// Problema: Ler e armazenar as notas de um aluno. Informar o valor da média

// Solução 2: Usando loop
int main() {

    int qtdNotas;
    printf("Quantas notas você vai digitar ? ");
    scanf("%d", &qtdNotas);

    float media = 0.0;

    for (int i = 0; i < qtdNotas; i++) {
        float nota;
        printf("Informe a %dº nota: ", i + 1);
        scanf("%d", &nota);

        media += nota;
    }

    printf("Sua média é %.2f\n", media);

    return 0;
}

// Problema da solução 2: Não é possível acessar o valor da nota depois que o laço termina. 