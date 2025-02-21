#include <stdio.h>

int main() {
    // Exemplo 1: Um laço para imprimir os números de 1 a 5
    int contador = 1;

    while (contador <= 5) {
        printf("%d\n", contador);
        contador++;
    }

    // Exemplo 2: Soma números digitados pelo usuário até que seja digitado 0
    int soma = 0;

    while (1) { // Um laço infinito que será interrompido com 'break'
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Finaliza o laço
        }

        soma += numero;
    }

    printf("A soma foi: %d\n", soma);

    return 0;
}
