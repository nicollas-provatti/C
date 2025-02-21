#include <stdio.h>

int main() {

    // Menor que 18.5 -> Baixo Peso
    // De 18.5 a 24.88 -> Normal
    // De 25 a 29.99 -> Sobrepeso
    // Maior que 30 -> Obesidade

    float altura = 1.85, peso = 80;
    float imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Baixo Peso.\n");
    } 
    else if (imc >= 18.5 && imc <= 24.99) {
        printf("Peso Normal.\n");
    } 
    else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso.\n");
    } 
    else {
        printf("Obesidade");
    }
        
    return 0;
}