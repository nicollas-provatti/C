#include <stdio.h>

void ler_matriz(int matriz[][3], int linha, int coluna) {

    for (int i = 0; i < linha; i ++) {
  
      for (int j = 0; j < coluna; j++) {
        scanf("%d", matriz[i][j]);
      }
  
    }
  }
  
void imprimir_matriz(int matriz[][3], int linha, int coluna) {
  for (int i = 0; i < linha; i ++) {
    for (int j = 0; j < coluna; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
  
  int main() {
  
    int numeros[3][3];
    ler_matriz(numeros, 3, 3);
    imprimir_matriz(numeros, 3, 3);
  
    return 0;
  }