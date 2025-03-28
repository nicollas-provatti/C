#include <stdio.h>

int main() {

    // Array com ponteiros
    int array[5] = {1, 2, 3, 4, 5};
    
    printf("%p\n", array);
    printf("%d\n", *array);
    printf("%d\n", *(array + 1));

    return 0;
}