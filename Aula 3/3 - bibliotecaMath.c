#include <stdio.h>
#include <math.h> // Biblioteca que contém funções matemáticas

int main() {

    int numero = 9;
    double potencia, raiz;

    potencia = pow(numero, 2);

    printf("%lf\n", potencia);

    raiz = sqrt(numero);

    return 0;
}