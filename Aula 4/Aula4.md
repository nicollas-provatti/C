# Array e Matriz

## Arrays em C

### Definição de Array
Um array é uma estrutura de dados que armazena **múltiplos** valores do mesmo tipo em posições sequenciais de memória. O acesso a cada elemento é feito por meio de um índice numérico, começando do zero.

![Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20240410101419/Getting-Started-with-Array-Data-Structure.webp "Array")

---

### Declaração e Inicialização
A declaração de um array em C segue a sintaxe:
```
tipo nome_do_array[tamanho];
```
```c
int numeros[5]; // Declaração 

int numeros[5] = {1, 2, 3, 4, 5}; // Inicialização

int numeros[5] = {0} // Inicialização com 0
```
Caso não sejam fornecidos valores, os elementos podem conter valores **indefinidos**.

---
### Acesso e Manipulação
O acesso aos elementos de um array é feito através do **índice**:
```c
int numeros[5] = {1, 2, 3, 4, 5};

int valor = numeros[2];  // Obtém o terceiro elemento (3)

numeros[1] = 10;  // Modifica o segundo elemento para 10
```

---

### Usando Loop para Ler e Imprimir um Array
Para percorrer um array, usamos um laço **for**:
```c
// Armezenando elementos no array
for(int i = 0; i < 5; i++) {
    scanf("%d ", &numeros[i]);
}

// Imprimindo os elementos do array
for(int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
```

--- 

### Passagem de Array para Função
Os arrays são passados por **referência** para funções, pois são representados como ponteiros. Veremos mais sobre isso na próxima aula. Exemplo de função que imprime um array:
```c
void imprimirArray(int arr[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
}

// Chamada da função:
int main() {
    int valores[3] = {4, 5, 6};
    imprimirArray(valores, 3);
}
```

---

## Matriz em C

### Definição de Matriz
Uma matriz é um array **multidimensional**, geralmente usado para representar tabelas ou grades de dados. Uma matriz bidimensional, por exemplo, tem elementos organizados em **linhas** e **colunas**.

![Alt text](https://hermes.dio.me/assets/articles/65bf11e9-0812-486e-8ff4-9a666edb8a83.png "Matriz")

---

### Declaração e Inicialização
A sintaxe para declarar uma matriz:
```
tipo nome[linhas][colunas];
```
```c
int numeros[2][3]; // Declaração

int numeros[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
}; // Inicialização

int numeros[2][3] = {0}; // Inicialização com 0
```
Caso não sejam fornecidos valores, os elementos podem conter valores **indefinidos**.

--- 

### Usando Loop para Ler e Imprimir uma Matriz
Podemos usar dois loops for **aninhados** para percorrer a matriz:
```c
// Armazenando os elementos na matriz
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        scanf("%d ", &matriz[i][j]);
    }  
}

// Imprimindo os elementos da matriz
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\\n");
}
```
A variável **i** é responsável por percorrer a linhas e a **j** as colunas. Uma matriz sempre deve ser lida da esquerda para a direita de cima para baixo, por questões de otimização quanto ao acesso a memória.

---

### Passagem de Matriz para Função
Ao passar uma matriz para uma função, devemos especificar o número de colunas:
```c
void imprimirMatriz(int mat[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\\n");
    }
}

// Chamada da função:
int main() {
    int dados[2][3] = {{7, 8, 9}, {10, 11, 12}};
    imprimirMatriz(dados);
}
```
