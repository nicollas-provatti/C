#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float maiorAltura = 0.0;
char maisAlto[50] = "";

void exibirStatus() {
    printf("---------------------------------\n");
    printf(" D E T E C T O R   DE   A L T U R A\n\n");
    printf(" A maior Altura ate agora: %.2f m\n", maiorAltura);
    printf("---------------------------------\n");
}


int main() {
    
    printf("------------------------------------\n");
    printf(" D E T E C T O R   DE   A L T U R A\n\n");
    printf(" A maior Altura ate agora: %.2f m\n", maiorAltura);
    printf("------------------------------------\n");
    //exibirStatus();

    for (int contador = 1; contador <= 5; contador++) {
        char nome[50];
        float altura;
        
        printf("Digite o nome: ");
        scanf(" %49[^\n]", nome);
        printf("Digite a altura (m) de %s: ", nome);
        scanf("%f", &altura);

        if (altura > maiorAltura) {
            maiorAltura = altura;
            strcpy(maisAlto, nome);
        }
        
        system("clear"); // Para Windows, use "cls"
        printf("---------------------------------\n");
        printf(" D E T E C T O R   DE   A L T U R A\n\n");
        printf(" A maior Altura ate agora: %.2f m\n", maiorAltura);
        printf("---------------------------------\n");
        //exibirStatus();
    }
    
    system("clear"); // Para Windows, use "cls"
    printf("---------------------------------\n");
    printf(" D E T E C T O R   DE   A L T U R A\n\n");
    printf(" A maior Altura ate agora: %.2f m\n", maiorAltura);
    printf("---------------------------------\n");
    //exibirStatus();
    printf("A pessoa mais alta foi %s, com %.2f m.\n", maisAlto, maiorAltura);
    
    return 0;
}

