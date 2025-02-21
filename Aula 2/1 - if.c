#include <stdio.h>

int main() {

    int numero = 10;

    // Verifica se o número é par
    if (numero % 2 == 0) {
        printf("O número %d é par\n", numero);
    }

    // O bloco if executa o código dentro das chaves apenas se a condição (numero % 2 == 0) for verdadeira.

    if (numero % 2 != 0) {
        printf("O número %d é ímpar\n", numero);
    }

    // O comando if é usado para verificar uma condição específica.
    // Se a condição for verdadeira, o bloco de código dentro das chaves será executado. Caso contrário, ele será ignorado.
    // Nesse caso, precisamos usar dois comandos if's, mas veremos como resolver esse problema de uma forma melhor usando o else

    return 0;
}