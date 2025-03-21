#include <stdio.h>

//Problema: armazenar as notas de vários alunos e informa qual teve a maior nota.

// Solução 2: usando arrays
int main() {

    float aluno1_notas[3];
    float aluno2_notas[3];
    float aluno3_notas[3];
    float aluno1_media = 0.0, aluno2_media = 0.0, aluno3_media = 0.0;

    // Ler as notas do aluno 1
    for (int i = 0; i < 3; i++) {
        scanf("%d", &aluno1_notas[i]);
        aluno1_media += aluno1_notas[i];
    }

    aluno1_media = aluno1_media / 3.0; 

    // Ler as notas do aluno 2
    for (int i = 0; i < 3; i++) {
        scanf("%d", &aluno2_notas[i]);
        aluno2_media += aluno2_notas[i];
    }

    aluno2_media = aluno2_media / 3.0; 

    // Ler as notas do aluno 3
    for (int i = 0; i < 3; i++) {
        scanf("%d", &aluno3_notas[i]);
        aluno3_media += aluno3_notas[i];
    }

    aluno3_media = aluno3_media / 3.0; 

    if (aluno1_media > aluno2_media && aluno1_media > aluno3_media) {
        printf("O aluno 1 teve a melhor média: %.2f\n", aluno1_media);

    } else if (aluno2_media > aluno1_media && aluno2_media > aluno3_media) {
        printf("O aluno 2 teve a melhor média: %.2f\n", aluno2_media);
        
    } else {
        printf("O aluno 3 teve a melhor média: %.2f\n", aluno3_media);
    }

    return 0;
}

// Desvantagem: é preciso declarar um novo array para cada aluno