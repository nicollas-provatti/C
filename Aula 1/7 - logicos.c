#include <stdio.h>

int main() {
    // Declaração e inicialização de variáveis lógicas (0 = falso, 1 = verdadeiro)
    int a = 1;
    int b = 0;

    // Operadores Lógicos

    // Operador "E" (conjunção): verdadeiro somente se ambos os valores forem verdadeiros
    int E = a && b;
    printf("Operador E (a && b): %d\n", E);  // Saída: 0 (falso)

    // Operador "OU" (disjunção): verdadeiro se pelo menos um dos valores for verdadeiro
    int OU = a || b;
    printf("Operador OU (a || b): %d\n", OU);  // Saída: 1 (verdadeiro)

    // Operador "NÃO" (negação): inverte o valor lógico
    int NAO_A = !a;
    int NAO_B = !b;
    printf("Operador NÃO (!a): %d\n", NAO_A);  // Saída: 0 (falso)
    printf("Operador NÃO (!b): %d\n", NAO_B);  // Saída: 1 (verdadeiro)

    // Exemplo Prático: Verificar acesso a um sistema
    int idade = 20;
    int temPermissao = 1;
    int acessoLiberado = (idade >= 18) && temPermissao;

    printf("\nExemplo Prático:\n");
    printf("Idade: %d\n", idade);
    printf("Tem permissão? %d\n", temPermissao);
    printf("Acesso liberado? %d\n", acessoLiberado);  // Saída: 1 (verdadeiro)

    // Operador combinado: Usando "E", "OU" e "NÃO"
    int resultadoCombinado = (a && !b) || (b && !a);
    printf("\nResultado Combinado ((a && !b) || (b && !a)): %d\n", resultadoCombinado);  // Saída: 1 (verdadeiro)

    // Cenário: Verificar se uma pessoa pode votar
    int idadeEleitor = 16;
    int tituloEleitor = 0;
    int podeVotar = (idadeEleitor >= 16) && tituloEleitor;

    printf("\nCenário Prático:\n");
    printf("Idade do eleitor: %d\n", idadeEleitor);
    printf("Possui título de eleitor? %d\n", tituloEleitor);
    printf("Pode votar? %d\n", podeVotar);  // Saída: 0 (falso)

    return 0;
}
