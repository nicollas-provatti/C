#include <stdio.h>

void soma(int x, int y); // Declaração da Função

int main() {

    int num1 = 10, num2 = 5;
    soma(num1, num2); // Chamada da Função

    return 0;
}

void soma(int x, int y) { // Definição da Função
    printf("A soma é: %d", x + y);
}

