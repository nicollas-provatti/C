# Introdução à Linguagem C

## Breve História da Linguagem C
A linguagem C foi criada no início da década de 1970 por Dennis Ritchie no laboratório Bell Labs. Originalmente desenvolvida para a implementação do sistema operacional UNIX, tornou-se uma das linguagens de programação mais influentes devido à sua eficiência, portabilidade e flexibilidade. Atualmente, C é amplamente usada em sistemas operacionais, compiladores, drivers de hardware e softwares de alto desempenho.

---

## O Compilador em C
O código-fonte em C precisa ser traduzido para código de máquina antes de ser executado. Esse processo é feito por um **compilador**, como:

- **GCC** (GNU Compiler Collection) - comum em sistemas Linux
- **Clang** - desenvolvido pela LLVM
- **MSVC** (Microsoft Visual C++) - utilizado no Windows

Para compilar um programa em C usando o GCC:
```sh
gcc programa.c -o programa
./programa
```
---

## Estrutura Básica de um Programa em C
Todo programa em C segue uma estrutura básica:

```c
#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    printf("Olá, mundo!\n");  // Exibe uma mensagem na tela
    return 0;  // Indica que o programa finalizou corretamente
}
```

### Explicação:
- `#include <stdio.h>`: Importa a biblioteca de entrada e saída.
- `main()`: Função principal do programa.
- `printf()`: Exibe texto na tela.
- `return 0;`: Indica que o programa terminou corretamente.

---

## Variáveis: Definição
Variáveis são espaços na memória utilizados para armazenar valores que podem ser manipulados pelo programa.

---

## Tipos de Dados
Os principais tipos de dados em C são:

| Tipo    | Tamanho (bytes) | Descrição |
|---------|---------------|------------|
| `char`  | 1             | Caracteres |
| `int`   | 2 ou 4        | Números inteiros |
| `float` | 4             | Números reais com precisão simples |
| `double`| 8             | Números reais com precisão dupla |

---

## Declaração, Inicialização e Nomeação de Variáveis
### Declaração:
```c
int idade;
```
### Inicialização:
```c
int idade = 25;
```
### Declaração e inicialização simultânea:
```c
float altura = 1.75;
```

---

## Regras para Nomeação de Variáveis
- Deve começar com uma letra ou `_`.
- Pode conter letras, números e `_`, mas **não pode conter espaços ou caracteres especiais**.
- Não pode ser uma palavra reservada da linguagem.
- Sensível a maiúsculas e minúsculas (`idade` ≠ `Idade`).

Exemplos válidos:
```c
int numero;
float _media;
char nomeUsuario;
```

Exemplos inválidos:
```c
int 1numero;  // Não pode começar com número
float média;  // Não pode conter acentos
char nome usuario;  // Não pode conter espaço
```

---

## Entrada e Saída de Dados: `printf()` e `scanf()`
### `printf()` - Exibir dados na tela
```c
printf("Minha idade é %d anos\n", 25);
```

### `scanf()` - Ler entrada do usuário
```c
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Você tem %d anos\n", idade);
```

---

## Operadores em C
### 1. Operador de Atribuição
```c
int a = 10; // Atribui 10 a 'a'
```

### 2. Operador de Endereço (`&`)
```c
int x = 5;
printf("Endereço de x: %p\n", &x);
```

### 3. Operadores Aritméticos
| Operador | Descrição |
|----------|-------------|
| `+`      | Adição |
| `-`      | Subtração |
| `*`      | Multiplicação |
| `/`      | Divisão |
| `%`      | Módulo (resto da divisão) |

Exemplo:
```c
int soma = 10 + 5;  // soma = 15
```

### 4. Operadores Relacionais
| Operador | Descrição |
|----------|-------------|
| `==`     | Igual a |
| `!=`     | Diferente de |
| `>`      | Maior que |
| `<`      | Menor que |
| `>=`     | Maior ou igual |
| `<=`     | Menor ou igual |

Exemplo:
```c
if (x == y) {
    printf("São iguais");
}
```

### 5. Operadores Lógicos
| Operador | Descrição |
|----------|-------------|
| `&&`     | E lógico (AND) |
| `||`     | OU lógico (OR) |
| `!`      | NÃO lógico (NOT) |

Exemplo:
```c
if (idade > 18 && idade < 60) {
    printf("Adulto ativo");
}
```

### 6. Operadores de Incremento e Decremento
#### Pós-fixado:
```c
int x = 5;
printf("%d\n", x++); // Imprime 5, depois incrementa
```
#### Pré-fixado:
```c
int y = 5;
printf("%d\n", ++y); // Incrementa antes de imprimir
```

### 7. Operadores de Atribuição Aritmética
| Operador | Equivalente a |
|----------|--------------|
| `+=`     | `a = a + b` |
| `-=`     | `a = a - b` |
| `*=`     | `a = a * b` |
| `/=`     | `a = a / b` |
| `%=`     | `a = a % b` |

Exemplo:
```c
int valor = 10;
valor += 5;  // valor agora é 15
```

### 8. Operador Ternário
```c
int idade = 20;
printf("%s\n", (idade >= 18) ? "Maior de idade" : "Menor de idade");
```

---

Esse material fornece uma base sólida para iniciantes em C. Você pode expandi-lo conforme necessário para suas aulas!
