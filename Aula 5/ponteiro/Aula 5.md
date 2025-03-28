# Ponteiro

## Introdução a Ponteiros em C
Os ponteiros são um dos conceitos mais poderosos da linguagem C, permitindo manipular a memória diretamente. Eles são essenciais para estruturas dinâmicas, otimização de código e comunicação eficiente entre funções. Vamos explorar os principais tópicos relacionados a ponteiros.

--- 

### O que é um ponteiro?
Um ponteiro é uma **variável especial** que armazena o **endereço de memória** de outra variável. Em vez de guardar um valor diretamente, ele aponta para um local na memória onde o valor está armazenado.

![text](https://gabrielbueno072.github.io/rea-aed/img/pon/modelo.PNG "Ponteiro")

--- 

### Declaração e Inicialização de Ponteiros
A sintaxe para declarar um ponteiro é:
```
tipo *nome_do_ponteiro;
```
Onde:

- `tipo` é o tipo de dado apontado pelo ponteiro.
- `*` nindica que a variável é um ponteiro.
- `nome_do_ponteiro` é o nome da variável ponteiro.

**Exemplo de declaração e inicialização:**
```c
int a = 5;  
int *p = &a;  // 'p' guarda o endereço de 'a'
```
Caso um ponteiro não tenha um endereço para armazenar, é uma boa prática inicializá-lo como `NULL` para evitar comportamento indefinido.
```c
int *ptr = NULL;  // Ponteiro nulo
```

---

### Acesso e Manipulação do Valor Apontado pelo Ponteiro
Podemos acessar e modificar o valor armazenado na variável apontada por um ponteiro usando o **operador de desreferência (*)**.

**Exemplo:**
```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Valor de x: %d\n", *ptr);  // Acessando o valor de x através do ponteiro
    *ptr = 20;  // Alterando o valor de x através do ponteiro
    printf("Novo valor de x: %d\n", x);

    return 0;
}
```
**Saída:**
```yaml
Valor de x: 10  
Novo valor de x: 20  
```

--- 

### Passagem por Valor e por Referência
Em C, os parâmetros podem ser passados para funções de duas formas:

- **Por valor:** Uma cópia do valor da variável é enviada para a função.
- **Por referência:** O endereço da variável é passado, permitindo modificar o valor original.

**Exemplo de passagem por valor:**
```c
#include <stdio.h>

void modificar(int x) {
    x = 20;  // Apenas modifica a cópia local de x
}

int main() {
    int num = 10;
    modificar(num);
    printf("Valor de num: %d\n", num);  // Continua 10

    return 0;
}
```

**Exemplo de passagem por referência (usando ponteiros):**
```c
#include <stdio.h>

void modificar(int *p) {
    *p = 20;  // Modifica o valor original
}

int main() {
    int num = 10;
    modificar(&num);
    printf("Valor de num: %d\n", num);  // Agora é 20

    return 0;
}
```
**Saída:**
```yaml
Valor de num: 20  
```

**Conclusão:** A passagem por referência permite que a função modifique o valor original.

---

### Declarando um Array com Ponteiros
Arrays em C são, na verdade, ponteiros para o primeiro elemento. O nome do array representa o **endereço do primeiro elemento**.

**Exemplo:**
```c
int arr[] = {10, 20, 30};
int *ptr = arr;  // ptr aponta para o primeiro elemento do array

printf("%d\n", ptr[1]);  // Equivalente a arr[1], imprime 20
```

Isso significa que podemos percorrer um array usando um ponteiro:

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    for (int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i));  // Acessa elementos via ponteiro
    }

    return 0;
}
```

**Saída:**
```
10 20 30 40  
```

---

### Alocação Dinâmica (Definição e Motivação)
A **alocação dinâmica de memória** permite que o programa reserve memória **durante a execução**. Isso é útil quando não sabemos o tamanho exato da memória necessária previamente.

Motivações para usar alocação dinâmica:
- Criar estruturas de dados flexíveis (listas, árvores, etc.).
- Reduzir desperdício de memória.
- Manipular grandes volumes de dados sem limite fixo.

A alocação dinâmica em C utiliza a biblioteca `<stdlib.h>` e as funções:

---

### Funções de Alocação de Memória (malloc, calloc, realloc, free)

<br>

`malloc()` – Aloca memória
```c
void *malloc(size_t tamanho);
```
- Retorna um ponteiro para um bloco de memória do tamanho especificado.
- Se falhar, retorna `NULL`.

**Exemplo:**
```c
int *ptr = (int *) malloc(5 * sizeof(int));
```

<br>

`calloc()` – Aloca e inicializa memória com zero
```c
void *calloc(size_t num, size_t tamanho);
```

- Diferente de `malloc()`, inicializa os bytes alocados com 0.

**Exemplo:**
```c
int *ptr = (int *) calloc(5, sizeof(int));  // Aloca espaço para 5 inteiros e zera os valores
```

<br>

`realloc()` – Redimensiona memória alocada
```c
void *realloc(void *ptr, size_t novo_tamanho);
```

- Ajusta o tamanho de um bloco de memória previamente alocado.

**Exemplo:**
```c
ptr = (int *) realloc(ptr, 10 * sizeof(int));  // Expande para 10 inteiros
```

<br>

`free()` – Libera memória alocada
```c
void free(void *ptr);
```

- Libera a memória previamente alocada para evitar vazamento de memória.

**Exemplo:**
```c
free(ptr);  
ptr = NULL;  // Boa prática para evitar acessos inválidos
```