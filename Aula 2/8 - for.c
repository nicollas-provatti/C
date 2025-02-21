#include <stdio.h>

int main() {
    // Exemplo 1: Um laço para imprimir "Olá, mundo!" 5 vezes
    for (int contador = 1; contador <= 5; contador++) {
        printf("Olá, mundo!\n");
    }

    // Exemplo 2: Um laço que imprime os números de 0 a 100
    for (int contador = 0; contador <= 100; contador++) {
        printf("%d\n", contador);
    }

    // Exemplo 3: Um laço para processar números digitados pelo usuário
    int qtdNumeros, qtdPares = 0, qtdImpares = 0, soma = 0;

    // Solicita ao usuário a quantidade de números que deseja digitar
    printf("Quantos números você quer digitar? ");
    scanf("%d", &qtdNumeros);

    for (int contador = 1; contador <= qtdNumeros; contador++) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verifica se o número digitado é par ou ímpar
        if (numero % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        // Soma o número à variável 'soma'
        soma += numero;
    }

    // Exibe os resultados após o laço
    printf("Números pares: %d\n", qtdPares);
    printf("Números ímpares: %d\n", qtdImpares);
    printf("A soma dos números foi: %d\n", soma);

    return 0;
}
