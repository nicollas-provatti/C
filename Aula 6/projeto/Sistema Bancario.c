#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct usuario {
    char nome[50];
    char tipoConta[20];
    int numeroConta;
    float saldo;
} Usuario;

void carregarDados(Usuario usuarios[], int *qtd) {
    FILE *arquivo = fopen("usuarios.txt", "r");

    if (arquivo == NULL) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    while (fscanf(arquivo, "%49[^\n] %19[^\n]%d%f ", usuarios[*qtd].nome, usuarios[*qtd].tipoConta, &usuarios[*qtd].numeroConta, &usuarios[*qtd].saldo) != EOF) {
        (*qtd)++;
    }

    fclose(arquivo);
}

void salvarDados(Usuario usuarios[], int *qtd) {
    FILE *arquivo = fopen("usuarios.txt", "w");

    if (arquivo == NULL) {
        printf("Error.\n");
        return;
    }

    for (int i = 0; i < *qtd; i++) {
        fprintf(arquivo, "%s\n%s\n%d\n%.2f\n", usuarios[i].nome, usuarios[i].tipoConta, usuarios[i].numeroConta, usuarios[i].saldo);
    }

    fclose(arquivo);
}

void criarConta(Usuario usuarios[], int *qtd) {
    if (*qtd > TAM) {
        printf("Não é possível cadastrar mais usuários.\n");
        return;
    }

    printf("Informe os dados: \n");
    printf("Digite seu nome: ");
    scanf("%49[^\n]", usuarios[*qtd].nome);
    getchar();
    printf("Digite o tipo da conta: ");
    scanf("%19[^\n]", usuarios[*qtd].tipoConta);
    printf("Digite o número da conta: ");
    scanf("%d", &usuarios[*qtd].numeroConta);
    usuarios[*qtd].saldo = 0.0;

    printf("Usuário adicionado com sucesso!!\n\n");
    (*qtd)++;
}

void exebirContas(Usuario usuarios[], int *qtd) {
    printf("\n");
    for (int i = 0; i < *qtd; i++) {
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Tipo da Conta: %s\n", usuarios[i].tipoConta);
        printf("Numero de Conta: %d\n", usuarios[i].numeroConta);
        printf("Saldo: %.2f\n\n", usuarios[i].saldo);
    }
}

int main() {

    Usuario usuarios[TAM];
    int qtdUsarios = 0;

    carregarDados(usuarios, &qtdUsarios);

    while (1) {
        printf("================= MENU =================\n");
        printf("\t1 - Criar uma Conta\n");
        printf("\t2 - Exibir Contas\n");
        printf("\t3 - Depositar Dinhiero\n");
        printf("\t4 - Sacar Dinheiro\n");
        printf("\t5 - Transferir Dinheiro\n");
        printf("\t6 - Buscar Conta\n");
        printf("\t7 - Finalizar Programa\n");
        printf("========================================\n\n");

        int opcao;
        printf("Qual sua escolha: ");
        scanf("%d", &opcao);

        if (opcao == 7) {
            printf("Salvando os dados...\n");
            salvarDados(usuarios, &qtdUsarios);
            printf("Fizalinado...\n");
            break;
        }

        switch (opcao) {
            case 1:
                getchar();
                criarConta(usuarios, &qtdUsarios);
                break;
            case 2:
                exebirContas(usuarios, &qtdUsarios);
                break;
        }
    }


    return 0;
}