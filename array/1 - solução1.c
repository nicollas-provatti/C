#include <stdio.h>

// Problema: Ler e armazenar as notas de um aluno. Informar o valor da média.

// Solução 1: Declarar várias variáveis
int main() {

    float nota1, nota2, nota3, nota4, nota5, nota6;
    float media;

    scanf("%d%d%d%d%d%d", &nota1, &nota2, &nota3, &nota4, &nota5, &nota6);

    media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6.0;

    printf("%f\n", media);

    return 0;
}

// Problema da solução 1: 
//Primeiro, foi necessário criar uma variável para cada nota. 
//Segundo, é preciso saber apriori o número de notas. 
