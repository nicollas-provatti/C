#include <stdio.h>

// Variável global (pode ser acessada em qualquer parte do código)
int global = 10;

void exemplo() {
    // Variável local (só pode ser acessada dentro da função)
    int local = 20;
    
    printf("Dentro da função exemplo:\n");
    printf("Variável global: %d\n", global); 
    printf("Variável local: %d\n", local);
}

int main() {
    exemplo();
    
    printf("\nDentro da função main:\n");
    printf("Variável global: %d\n", global);
    
    // A linha abaixo daria erro porque 'local' é uma variável local da função exemplo()
    // printf("Variável local: %d\n", local); // ERRO: 'local' não está definida em main()
    
    return 0;
}
