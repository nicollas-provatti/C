#include <stdio.h>

// Leitura de Arquivo: fgetc()

int main() {

    FILE *arquivo = fopen("dados.txt", "r"); 
    
    if (arquivo == NULL) {
        printf("ERROR\n");
        return 1;
    }

    // Apresentando fgetc()
    /* char ch1 = fgetc(arquivo);
    printf("%c\n", ch1);
    char ch2 = fgetc(arquivo);
    printf("%c\n", ch2);  */

    // Lendo todos os caracteres
    while (1) {
        char ch = fgetc(arquivo);

        if (ch == EOF) {
            break;
        }
        printf("%c", ch);
    }

    return 0;
}