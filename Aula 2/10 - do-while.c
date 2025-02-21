#include <stdio.h>

int main() {
    // Exemplo 1: Um laço que imprime os números de 1 a 5
    int contador = 1;

    do {
        printf("%d\n", contador);
        contador++;
    } while (contador <= 5);

    // Exemplo 2: Soma números digitados pelo usuário em 5 iterações
    int soma = 0;
    contador = 1;

    do {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        soma += numero;
        contador++;
    } while (contador <= 5);

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
