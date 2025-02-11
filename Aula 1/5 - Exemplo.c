#include <stdio.h>

int main() {

  int idadeJoao = 14, idadePedro = 18;
  float alturaJoao = 1.65, alturaPedro = 1.76;

  printf("Nome  Idade  Altura\n");
  printf("João %5d %7.2f\n", idadeJoao, alturaJoao);
  printf("Pedro %4d %7.2f\n", idadePedro, alturaPedro);

  return 0;
}