#include <stdio.h>

int fibonacci(int n) {

    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    int resultado = fibonacci(n - 1) + fibonacci(n - 2);

    return resultado;
}

int main() {

    printf("%d\n", fibonacci(5));

    return 0;
}