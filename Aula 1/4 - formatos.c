#include <stdio.h>

int main() {

  // Modificador de largura
  int numero = 5;
  printf("A variável numero vale: %d\n", numero);
  printf("A variável numero vale: %5d\n", numero);

  // Geralmente usado para alinhar a direita
  int n1 = 5, n2 = 50, n3 = 500;
  printf("%3d\n", n1);
  printf("%3d\n", n2);
  printf("%d\n", n3);

  // Moficador de precisão
  float pi = 3.14159;
  printf("A variável pi vale: %f\n", pi);
  printf("A variável pi vale: %.2f\n", pi);
  
  // Juntando os dois
  printf("%10.2f\n", pi);
  

  return 0;
}