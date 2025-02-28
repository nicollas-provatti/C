#include <stdio.h>
// Recursão na prática

// Exemplo 1:
void recursiva() {

    printf("Olá, mundo\n");

    recursiva();
}

// Exempplo 2:
void contagem(int contador) {
    printf("%d\n", contador);
    contador++;
    contagem(contador);
    contagem(contador++); // assim dá errado
    contagem(contador + 1); // melhor assim
}

int main() {

    recursiva();
    contagem(0);

    return 0;
}

