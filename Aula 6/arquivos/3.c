#include <stdio.h>
#include <string.h>

// Leitura de Arquivo: fgets()

int main() {

    FILE *arquivo = fopen("dados.txt", "r"); 
    
    if (arquivo == NULL) {
        printf("ERROR\n");
        return 1;
    }

    // Apresentando fgets()
    /* char linha1[50];
    fgets(linha1, sizeof(linha1), arquivo);
    printf("%s", linha1);
    char linha2[50];
    fgets(linha2, sizeof(linha2), arquivo);
    printf("%s", linha2); */

    // Lendo todas as linhas
    while (1) {
        char linha[50];

        if (fgets(linha, sizeof(linha), arquivo) == NULL) {
            break;
        }
        linha[strcspn(linha, "\n")]  = '\0';
        printf("%s\n", linha); 
    }
    
    fclose(arquivo);

    return 0;
}