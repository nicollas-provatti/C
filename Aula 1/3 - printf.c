#include <stdio.h>

int main() {

    printf("Dados do usuário:\n"); // Imprimindo apenas um texto

    int idade = 16;
    float altura = 1.76;
    char genero = 'M';
    char nome[10] = "João";

    printf("Sua idade é: %d\n", idade); //Imprimindo o conteúdo de uma variável
    printf("Sua altura é: %f", altura);
    printf("Seu gênero é: %c\n", genero);
    printf("Seu nome é: %s\n", nome);

}