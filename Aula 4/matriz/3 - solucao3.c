#include <stdio.h>

//Problema: armazenar as notas de vários alunos e informa qual teve a maior nota

// Solução 3: usando matriz
int main() {

    float notas[3][3];
  
    // As linhas serão os alunos
    // As colunas serão as notas

    notas[0][0] = 7.5, notas[0][1] = 8.5, notas[0][2] = 6.7;
    notas[1][0] = 6.5, notas[1][1] = 4.5, notas[1][2] = 8.7;
    notas[2][0] = 4.5, notas[2][1] = 8.5, notas[2][2] = 7.7;
  
    float aluno1_media = (notas[0][0] + notas[0][1] + notas[0][2]) / 3.0;
    float aluno2_media = (notas[1][0] + notas[1][1] + notas[1][2]) / 3.0;
    float aluno3_media = (notas[2][0] + notas[2][1] + notas[2][2]) / 3.0;

    if (aluno1_media > aluno2_media && aluno1_media > aluno3_media) {
        printf("O aluno 1 teve a melhor média: %.2f\n", aluno1_media);

    } else if (aluno2_media > aluno1_media && aluno2_media > aluno3_media) {
        printf("O aluno 2 teve a melhor média: %.2f\n", aluno2_media);
        
    } else {
        printf("O aluno 3 teve a melhor média: %.2f\n", aluno3_media);
    }
    
    return 0;
}

// Obs.: é preciso saber o tamanho da matriz.