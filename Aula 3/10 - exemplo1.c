#include <stdio.h>
// Criando uma função que lê vários valores
void ler(int contador, int n) {

    if (contador == n) {
        printf("Fim da leitura.\n");
        //printf("Números digitados: ");
        return;
    }
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    ler(contador + 1, n);
    //printf("%d ", numero); para ver os números digitados
}

int main() {

    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    ler(0, n);
    printf("\n");

    return 0;
}