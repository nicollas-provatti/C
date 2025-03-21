#include <stdio.h>

//Problema: armazenar as notas de vários alunos e informa qual teve a maior nota.

// Solução 1: usando variáveis
int main() {

    float aluno1_nota1, aluno1_nota2, aluno1_nota3;
    float aluno2_nota1, aluno2_nota2, aluno2_nota3;
    float aluno3_nota1, aluno3_nota2, aluno3_nota3;

    scanf("%d%d%d", &aluno1_nota1, &aluno1_nota2, &aluno1_nota3);
    scanf("%d%d%d", &aluno2_nota1, &aluno2_nota2, &aluno2_nota3);
    scanf("%d%d%d", &aluno3_nota1, &aluno3_nota2, &aluno3_nota3);

    float aluno1_media = (aluno1_nota1 + aluno1_nota2 + aluno1_nota3) / 3.0;
    float aluno2_media = (aluno2_nota1 + aluno2_nota2 + aluno2_nota3) / 3.0;
    float aluno3_media = (aluno3_nota1 + aluno3_nota2 + aluno3_nota3) / 3.0;

    if (aluno1_media > aluno2_media && aluno1_media > aluno3_media) {
        printf("O aluno 1 teve a melhor média: %.2f\n", aluno1_media);

    } else if (aluno2_media > aluno1_media && aluno2_media > aluno3_media) {
        printf("O aluno 2 teve a melhor média: %.2f\n", aluno2_media);
        
    } else {
        printf("O aluno 3 teve a melhor média: %.2f\n", aluno3_media);
    }

    return 0;
}

// Desvantagem: é preciso declarar muitas variáveis