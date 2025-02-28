#include <stdio.h>
// Criando uma função que lê vários valores e conta quantos são pares
void contar_pares(int contador, int n, int qtdPares) {

    if (contador == n) {
        printf("Números pares digitado: %d\n", qtdPares);
        return;
    }
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        qtdPares++;
    }

    contar_pares(contador + 1, n, qtdPares);
    //printf("%d ", numero); para ver os números digitados
}

int main() {

    contar_pares(0, 5, 0);

    return 0;
}