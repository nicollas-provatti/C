#include <stdio.h>
#include <stdlib.h>

int main() {
    //void *realloc(void *ptr, size_t novo_tamanho);
    int *ptr = (int *) malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    ptr[0] = 10, ptr[1] = 20, ptr[2] = 30;

    // Aumentando
    ptr = (int *) realloc(ptr, 5 * sizeof(int));

    if (ptr == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }

    ptr[3] = 40, ptr[4] = 50;

    for (int i = 0; i < 5; i ++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}