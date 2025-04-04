# 📚 Structs em C

---

## 📌 Definição de Structs
Uma `struct` (estrutura) em C é um tipo de dado composto que permite agrupar diferentes variáveis sob um único nome. Ela é usada para representar objetos mais complexos, combinando vários tipos de dados em uma única unidade lógica.

**🔹 Exemplo de definição de struct:**
```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
```

Aqui, a `struct Pessoa` define um tipo que armazena um nome (`char[50]`), idade (`int`) e altura (`float`).

--- 

## 📌 Declaração e Inicialização
Depois de definir a `struct`, podemos declarar variáveis baseadas nela e inicializá-las.

**🔹 Declaração de uma variável struct:**
```c
struct Pessoa p1;
```

**🔹 Inicialização direta:**
```c
struct Pessoa p1 = {"Carlos", 25, 1.75};
```

**🔹 Atribuindo valores após a declaração:**
```c
struct Pessoa p1;
p1.idade = 25;
p1.altura = 1.75;
strcpy(p1.nome, "Carlos");  // Strings precisam de strcpy()
```

---

## 📌 Acesso e Manipulação de Structs
Os membros da `struct` podem ser acessados usando o operador **`.`** **(ponto)**.

**🔹 Exemplo:**
```c
printf("Nome: %s\n", p1.nome);
printf("Idade: %d\n", p1.idade);
p1.idade += 1;  // Alterando um valor
```

Podemos também modificar os valores diretamente, como `p1.altura = 1.80;`.

---

## 📌 Array de Structs
Podemos criar um array de `structs` para armazenar múltiplos registros.

**🔹 Exemplo:**
```c
struct Pessoa pessoas[3] = {
    {"Carlos", 25, 1.75},
    {"Ana", 30, 1.65},
    {"Pedro", 22, 1.80}
};
```

**🔹 Acessando os elementos:**
```c
for (int i = 0; i < 3; i++) {
    printf("Nome: %s, Idade: %d, Altura: %.2f\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].altura);
}
```

---

## 📌 Passando Structs para Funções
Podemos passar uma `struct` para uma função **por valor** (cópia) ou **por referência** (endereço).

**Passagem por Valor**
A função recebe uma cópia da struct, então as mudanças feitas nela **não afetam a original.**
```c
void mostrarPessoa(struct Pessoa p) {
    printf("Nome: %s, Idade: %d, Altura: %.2f\n", p.nome, p.idade, p.altura);
}
```
Chamando a função:
```c
mostrarPessoa(p1);
```
<br>

**Passagem por Referência**
Se quisermos modificar a `struct` dentro da função, devemos passar um **ponteiro** para a `struct`.

```c
void envelhecer(struct Pessoa *p) {
    p->idade += 1;  // Notação de seta (->)
}
```

Chamando a função:
```c
envelhecer(&p1);
printf("Nova idade de %s: %d\n", p1.nome, p1.idade);
```

**Explicação da Notação `->`**
Quando usamos ponteiros para `structs`, precisamos acessar os membros usando `->` ao invés de `.`:
```c
p->idade  // Equivalente a (*p).idade
```

---

## 📌 Structs Aninhadas
Podemos definir `structs` dentro de outras `structs` para modelar dados mais complexos.

**🔹 Exemplo de Struct Aninhada:**
```c
struct Endereco {
    char rua[50];
    int numero;
};

struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco endereco;  // Struct dentro de struct
};
```

**🔹 Inicializando e acessando membros da struct aninhada:**
```c
struct Pessoa p = {"Carlos", 25, {"Rua A", 123}};
printf("Nome: %s, Rua: %s, Número: %d\n", p.nome, p.endereco.rua, p.endereco.numero);
```

## 📌 `typedef`
O `typedef` é uma palavra-chave usada em C para definir um novo nome (alias) para tipos de dados, tornando o código mais legível e simplificado. No contexto de `structs`, ele é muito útil para evitar a repetição da palavra-chave `struct` ao declarar variáveis.

**🔹 Exemplo de Struct sem `typedef`:**
Quando definimos uma `struct` sem `typedef`, precisamos sempre referenciar a `struct` pelo seu nome completo:
```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;  // Sempre precisamos colocar 'struct'
    p1.idade = 25;
    return 0;
}
```
A cada declaração, precisamos escrever `struct Pessoa`.

**🔹 Exemplo de Struct com `typedef`:**
O `typedef` permite criar um nome alternativo para a `struct`, eliminando a necessidade de usar `struct` na declaração.
```c
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;  // Agora 'Pessoa' é um tipo de dado válido

int main() {
    Pessoa p1;  // Não precisamos mais usar 'struct'
    p1.idade = 25;
    return 0;
}
```

Aqui, `Pessoa` agora é um nome de tipo válido, tornando as declarações mais limpas e fáceis de ler.

---

# 📚 Arquivos em C
A manipulação de arquivos em C é essencial para armazenar e recuperar dados de forma persistente. O C fornece um conjunto de funções na biblioteca padrão `<stdio.h>` para realizar operações de leitura e escrita em arquivos.

## 📌 Introdução à Manipulação de Arquivos
Em C, os arquivos podem ser usados para armazenar informações permanentemente, diferente das variáveis que perdem seus valores quando o programa é encerrado. Para isso, usamos um ponteiro do tipo `FILE*`, que representa o arquivo em memória e permite sua manipulação.

```c
FILE *arquivo;
```

Antes de realizar operações em um arquivo, ele precisa ser **aberto** (`fopen`) e, ao final, **fechado** (`fclose`) para evitar vazamento de memória.

--- 

## 📌  Abertura e Fechamento de Arquivos
`fopen()` – **Abrindo um Arquivo**
A função `fopen()` abre um arquivo e retorna um ponteiro do tipo `FILE*`. Se houver erro, retorna `NULL`.
A sintaxe básica é:

```c
FILE *fopen(const char *nome_arquivo, const char *modo);
```

Os modos de abertura são:

| **Modo** | **Descrição** |
|----------|---------------|
| `"r"`    | Abre para leitura (arquivo deve existir). |
| `"w"`    | Abre para escrita (cria um novo ou sobrescreve). |
| `"a"`    | Abre para adicionar conteúdo ao final do arquivo. |
| `"r+"`   | Abre para leitura e escrita (arquivo deve existir). |
| `"w+"`   | Abre para leitura e escrita (cria um novo ou sobrescreve). |
| `"a+"`   | Abre para leitura e escrita, preservando o conteúdo. |

Exemplo de abertura de um arquivo para escrita:
```c
FILE *arquivo = fopen("dados.txt", "w");
if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
}
```

`fclose()` – **Fechando um Arquivo**
A função fclose() libera os recursos associados ao arquivo, garantindo que os dados sejam salvos corretamente.

```c
fclose(arquivo);
```

O fechamento é essencial para evitar corrupção de dados e uso excessivo de memória.

--- 

## 📌 Leitura de Arquivos

Para ler um arquivo, usamos funções que extraem caracteres, linhas ou dados formatados.

`fgetc()` – **Lendo um Caractere**
Lê um caractere por vez do arquivo:
```c
char ch;
FILE *arquivo = fopen("dados.txt", "r");
if (arquivo) {
    while ((ch = fgetc(arquivo)) != EOF) {
        putchar(ch);
    }
    fclose(arquivo);
}
```

`fgets()` – **Lendo uma Linha**
Lê uma linha do arquivo, armazenando em um buffer:
```c
char linha[100];
FILE *arquivo = fopen("dados.txt", "r");
if (arquivo) {
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }
    fclose(arquivo);
}
```

`fscanf()` – **Leitura Formatada**
Lê dados de um arquivo seguindo um formato específico:
```c
char nome[50];
int idade;
FILE *arquivo = fopen("dados.txt", "r");
if (arquivo) {
    fscanf(arquivo, "%s %d", nome, &idade);
    printf("Nome: %s, Idade: %d\n", nome, idade);
    fclose(arquivo);
}
```

---

## 📌 Escrita em Arquivos

Assim como a leitura, a escrita pode ser feita de diferentes formas.

`fputc()` – **Escrevendo um Caractere**
Escreve um caractere no arquivo:

```c
FILE *arquivo = fopen("dados.txt", "w");
if (arquivo) {
    fputc('A', arquivo);
    fclose(arquivo);
}
```

`fputs()` – **Escrevendo uma String**
Escreve uma string inteira no arquivo:

```c
FILE *arquivo = fopen("dados.txt", "w");
if (arquivo) {
    fputs("Olá, mundo!\n", arquivo);
    fclose(arquivo);
}
```

`fprintf() `– **Escrita Formatada**
Permite gravar dados formatados no arquivo:

```c
FILE *arquivo = fopen("dados.txt", "w");
if (arquivo) {
    fprintf(arquivo, "Nome: %s\nIdade: %d\n", "Carlos", 25);
    fclose(arquivo);
}
```