#include <stdio.h>

int main() {
    // Exemplo usando o laço 'do-while'
    int contador = 6;

    do {
        printf("%d\n", contador);
        contador++;
    } while (contador <= 5);

    /*
    O laço 'do-while' garante que o bloco de código será executado pelo menos uma vez.
    Neste caso, como 'contador' começa com 6, a condição (contador <= 5) já é falsa.
    Ainda assim, o bloco executa uma vez e imprime o valor 6.
    */

    // Exemplo usando o laço 'while'
    while (contador <= 5) {
        printf("%d\n", contador);
    }

    /*
    O laço 'while' verifica a condição antes de executar o bloco de código.
    Como 'contador' já vale 7, a condição (contador <= 5) é falsa desde o início.
    Por isso, o bloco não será executado nenhuma vez.
    */

    return 0;
}
