#include <stdio.h>

// Escrita de Arquivo: fprintf() com "a"

int main() {

    FILE *arquivo = fopen("dados.txt", "a");  
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[50] = "Nicollas";
    int idade = 23;
    float altura = 1.85;

    fprintf(arquivo, "%s\n%d\n%.2f\n", nome, idade, altura);

    fclose(arquivo);

    return 0;
}