#include <stdio.h>

int main() {

    int numero = 10;

    // Verifica se o número é positivo, negativo ou zero
    if (numero == 0) {
        printf("O número é zero\n");
    }
    else {
        if (numero > 0) {
            printf("O número é %d positivo\n", numero);
        } else {
            printf("O número é %d negativo\n", numero);
        }
    }

    //Uma estrutura se dentro de outra permite verificar múltiplas condições de forma hierárquica.

    // Estruturas de if podem ser aninhadas para verificar condições complexas em níveis diferentes.
	// No exemplo, foi feita uma verificação hierárquica para determinar se o número é positivo, negativo ou zero.
    // Cuidado! Evite colocar muitas estruturas aninhadas, pois dificulta a leitura do código

    return 0;
}
