# Struct

## 1. Carros

### Descrição:
Crie um programa em C que modele um **Carro** usando **structs** com os seguintes campos: `Ano` (inteiro), `Preço` (float) e `Marca` (string). Inicialize a struct com valores padrão e imprima-os. Em seguida, solicite ao usuário novos valores para os campos e exiba os dados atualizados.

---

## 2. Livros

### Descrição:
Crie um programa em C que gerencie informações de livros usando um array de structs. A struct deve conter `Título` (string), `Ano de Publicação` (inteiro) e `Preço` (Float). O programa deve:
- Criar um array de 4 livros e solicitar ao usuário que insira os dados de cada livro.
- Calcular e exibir a média dos preços dos livros.
- Exibir os dados dos livros que estão acima de média.

---

## 3. Alunos

### Descrição:

Crie um programa em C que gerencie o cadastro de estudantes. Cada estudante terá um `nome` (string), `idade`(inteiro) e uma estrutura **aninhada** com as `notas`(float) de três disciplinas: Matemática, Português e Ciências.

O programa deve:

- Definir um tipo Estudante usando typedef.
- Ter uma função para ler os dados de um estudante.
- Ter uma função para calcular a média das notas.
- Ter uma função para exibir os dados do estudante (nome, idade, notas e média).

**Desafio:** permitir o cadastro de vários estudantes e exibir a média da turma ao final.

---

# Arquivos

## 1. Dados do Usuário

### Descrição
Crie um programa que leia o `nome`, a `idade` e a `altura` de três pessoas e grave essas informações em um arquivo chamado **"dados.txt"**. Em seguida, o programa deve ler o arquivo e exibir os dados na tela. Utilize as funções `fprintf()` para gravar os dados no arquivo e `fscanf()` para lê-los.

## 2. Letras, Linhas e Palavras

### Descrição:
Crie um programa em C que abra um arquivo texto para leitura. O programa deve contar quantos caracteres, palavras e linhas existem no arquivo e exibir essas informações na tela. Utilize as funções `fgetc()` para ler os caracteres e `fopen()`e `fclose()` para abrir e fechar o arquivo, respectivamente.