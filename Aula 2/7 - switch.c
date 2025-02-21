#include <stdio.h>

int main() {

    int fruta;

    printf("---------------\n");
    printf("     FRUTAS    \n");
    printf("---------------\n");
    printf(" [1] - Maça\n");
    printf(" [2] - Melão\n");
    printf(" [3] - Pera\n");
    printf(" [4] - Banana\n");
    printf(" [5] - Cancelar\n");

    scanf("%d", &fruta);

    switch (fruta) {
    case 1:
        printf("Maça adicionado a cestinha.\n");
        break;
    case 2:
        printf("Melão adicionado a cestinha.\n");
        break;
    case 3:
        printf("Pera adicionado a cestinha.\n");
        break;
    case 4:
        printf("Banana adicionado a cestinha.\n");
        break;
    case 5:
        printf("Compra cancelada.\n");
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }

    return 0;
}