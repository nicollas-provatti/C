#include <stdio.h>

int main() {

    int numero = 10;

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par\n");
    }
    else {
        printf("O número %d é ímpar\n");
    }
    //O bloco else é executado caso a condição (numero % 2 == 0) seja falsa.

    // O else é usado para especificar um bloco alternativo de código que será executado quando a condição do if for falsa.
	// Esse tipo de estrutura é útil para tratar dois casos possíveis de forma clara.
	// O comando else sempre está relacionado a um comando if, não existe else sem if, porém existe if sem else


    return 0;
}

