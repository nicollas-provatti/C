#include <stdio.h>

int main() {

    char nome[15];
    int idade;
    float altura;
    char genero;
    
    scanf("%s", nome);
    scanf("%d", &idade);
    scanf("%f", &altura);
    scanf(" %c", &genero); // É preciso adicionar um espaço para ler o ENTER

    printf("Seu nome é: %d\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %f\n", altura);
    printf("Seu gênero é: %c\n", genero);

    return 0;
}