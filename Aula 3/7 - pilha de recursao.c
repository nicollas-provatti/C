#include <stdio.h>

/* 6: n = 0; imprimir(fim)
5: n = 1; imprimir(1); empilhar(0); imprimir(n)
4: n = 2; imprimir(2); empilhar(1); imprimir(n)
3: n = 3; imprimir(3); empilhar(2); imprimir(n)
2: n = 4; imprimir(4); empilhar(3); imprimir(n)
1: n = 5; imprimir(5); empilihar(4); imprimir(n) */

void empilharPratos(int n) {

    if (n == 0) {
        printf("Todos os pratos foram empilhados!\n");
        return;
    }
    
    printf("Empilhando prato %d\n", n);
    empilharPratos(n - 1);  // Chamando recursivamente
    printf("Retirando prato %d\n", n);
}

int main() {
    empilharPratos(5);
    return 0;
}