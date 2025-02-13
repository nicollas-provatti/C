#include <stdio.h>

int main() {
    // Declaração e inicialização de variáveis
    int num1 = 5, num2 = 10;
    int resultado;  // Variável para armazenar o resultado das comparações.

    // Exemplo com todos os operadores relacionais

    // Igualdade
    resultado = (num1 == num2);  // Verifica se num1 é igual a num2.
    printf("%d == %d: %d\n", num1, num2, resultado);  // Saída: 0 (falso)

    // Diferença
    resultado = (num1 != num2);  // Verifica se num1 é diferente de num2.
    printf("%d != %d: %d\n", num1, num2, resultado);  // Saída: 1 (verdadeiro)

    // Maior que
    resultado = (num1 > num2);  // Verifica se num1 é maior que num2.
    printf("%d > %d: %d\n", num1, num2, resultado);  // Saída: 0 (falso)

    // Maior ou igual
    resultado = (num1 >= num2);  // Verifica se num1 é maior ou igual a num2.
    printf("%d >= %d: %d\n", num1, num2, resultado);  // Saída: 0 (falso)

    // Menor que
    resultado = (num1 < num2);  // Verifica se num1 é menor que num2.
    printf("%d < %d: %d\n", num1, num2, resultado);  // Saída: 1 (verdadeiro)

    // Menor ou igual
    resultado = (num1 <= num2);  // Verifica se num1 é menor ou igual a num2.
    printf("%d <= %d: %d\n\n", num1, num2, resultado);  // Saída: 1 (verdadeiro)

    // Exemplo prático de comparação
    int idadeMinima = 18;
    int idadeUsuario = 20;
    int podeEntrar = (idadeUsuario >= idadeMinima);  // Verifica se o usuário pode entrar com base na idade mínima.

    printf("Idade do usuário: %d\n", idadeUsuario);
    printf("Idade mínima exigida: %d\n", idadeMinima);
    printf("O usuário pode entrar? %d\n", podeEntrar);  // Saída: 1 (verdadeiro)

    return 0;
}