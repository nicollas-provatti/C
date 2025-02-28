#include <stdio.h>

// Contador de 0 até 100

void contagem(int contador) {

    if (contador > 100) { 
        printf("Fim da contagem.\n");
        return;
    }
    
    printf("%d\n", contador);
    contagem(contador + 1); 
    printf("Instrução"); // E se tiver mais instruçõe ?
}

void contagem2(int contador) {

    if (contador <= 100) { // caso base + passo recursivo
        printf("%d\n", contador);
        contagem2(++contador);
    } 
}

int main() {

    contagem(0);
    contagem2(0);

    return 0;
}