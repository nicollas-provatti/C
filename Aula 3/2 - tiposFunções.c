#include <stdio.h>

int soma(int x, int y);

char maiuscula(char letra);

float media(float nota1, float nota2);


int main() {

    int num1 = 5, num2 = 2;
    char letra = 'a';
    float nota1 = 5.7, nota2 = 8.3;

    int resultadoSoma = soma(num1, num2);

    char resultadoMaiuscula = maiuscula(letra);

    float resultadoMedia = media(nota1, nota2);

    printf("Soma: %d\n", resultadoSoma);
    printf("Maiuscula: %c\n", resultadoMaiuscula);
    printf("Média: %.2f\n", resultadoMedia);

    return 0;
}

int soma(int x, int y) {
    return x + y;
}

char maiuscula(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - 32;
    }
    return letra;
}

float media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}