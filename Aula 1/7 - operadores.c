#include <stdio.h>

int main() {
    // Aritméticos
    int n1 = 10, n2 = 15, soma;
    soma = n1 + n2; 

    // Relacionais
    int igualdade = n1 == n2;

    // Lógicos
    int n3 = 5, n4 = 20;
    int and = (n1 < n2) && (n3 > n4);
    int or = (n1 < n2) || (n3 > n4);

    // Ternário
    int numero = 10;
    int resultado = (numero > 0) ? 1: 0;
    printf("%d\n", resultado);

    (numero > 0) ? printf("eh postivo!\n") : printf("eh negativo!\n");
    
    return 0;
}