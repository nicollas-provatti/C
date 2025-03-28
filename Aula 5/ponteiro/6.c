#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc()

    int *ptr = (int *) malloc(5 *sizeof(int));

    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("%p\n", ptr);
    printf("Primeiro elemento: %d\n", ptr[0]);
    ptr[0] = 10;
    printf("Primeiro elemento: %d\n", ptr[0]);

    free(ptr);

    return 0;
}