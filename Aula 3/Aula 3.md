# Funções em C
## Conceito de Função
Uma função é um bloco de código que executa uma tarefa específica. Permite reutilização de código e facilita a organização do programa.

---

## Declaração, Definição e Chamada de Funções
### Declaração:
Define o protótipo da função antes de seu uso.
```c
int soma(int a, int b);
```

### Definição:
Implementa a funcionalidade da função.
```c
int soma(int a, int b) {
    return a + b;
}
```

### Chamada:
Executa a função.
```c
int resultado = soma(5, 3);
printf("Resultado: %d\n", resultado);
```

---

## Tipos de Funções
As funções podem ser classificadas em:
- **Sem retorno e sem parâmetro**:
```c
void mensagem() {
    printf("Olá, Mundo!\n");
}
```

- **Sem retorno e com parâmetros**:
```c
void exibirNumero(int num) {
    printf("Número: %d\n", num);
}
```

- **Com retorno e sem parâmetros**:
```c
int obterNumero() {
    return 42;
}
```

- **Com retorno e com parâmetros**:
```c
int multiplicar(int x, int y) {
    return x * y;
}
```

---

## Escopo de Variáveis
O escopo define a visibilidade das variáveis dentro do código.
- **Variáveis locais**: Definidas dentro de funções, só podem ser acessadas dentro delas.
- **Variáveis globais**: Definidas fora de qualquer função, podem ser acessadas de qualquer parte do programa.

Exemplo:
```c
int global = 10;

void exemplo() {
    int local = 5;
    printf("Local: %d, Global: %d\n", local, global);
}
```

---

## Recursão
A recursão ocorre quando uma função chama a si mesma para resolver um problema.

Exemplo simples:
```c
void contagem(int n) {
    if (n == 0) {
        printf("FIM!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}
```

---

## Componentes da Recursão
- **Caso base**: Condição que encerra a recursão.
- **Passo recursivo**: Chamadas sucessivas até atingir o caso base.

Exemplo:
```c
void imprimir(int n) {
    if (n == 0) return;
    printf("%d\n", n);
    imprimir(n - 1);
}
```

---

## Conceito de Pilha de Recursão
Cada chamada recursiva empilha uma nova execução na memória até atingir o caso base.

Exemplo de pilha ao chamar `fatorial(3)`:
```
fatorial(3) → fatorial(2) → fatorial(1) → fatorial(0)
```

---

## Exemplo 1: Fatorial
```c
int fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}
```

Uso:
```c
printf("Fatorial de 5: %d\n", fatorial(5));
```

---

## Exemplo 2: Fibonacci
```c
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

Uso:
```c
printf("Fibonacci(6): %d\n", fibonacci(6));
```

---
