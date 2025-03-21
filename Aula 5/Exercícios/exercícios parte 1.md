# Exercícios

## 1️⃣ Modificando um Parágrafo
**Objetivo:** Alterar o conteúdo de um parágrafo utilizando `getElementById` e `innerText`.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 1</title>
</head>
<body>
    <p id="mensagem">Texto original.</p>
    <button onclick="alterarTexto()">Clique aqui</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Na tag `<script>`, escreva uma função chamada `alterarTexto()` que:

- Selecione o parágrafo pelo **id** `"mensagem"` usando `getElementById`.
- Altere o texto para `"Texto alterado com sucesso!"`.

---

## 2️⃣ Alterando a Cor de Vários Elementos
**Objetivo:** Modificar a cor de elementos de uma mesma classe usando `getElementsByClassName` e `style`.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 2</title>
</head>
<body>
    <h2 class="titulo">Título 1</h2>
    <h2 class="titulo">Título 2</h2>
    <h2 class="titulo">Título 3</h2>
    <button onclick="mudarCor()">Mudar Cor</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```
**Tarefa:** Crie a função `mudarCor()` que:

- Selecione todos os elementos com a classe `"titulo"` usando `getElementsByClassName`.
- Mude a cor do texto de todos para **vermelho**.

---

## 3️⃣  Pegando o Nome de um Input
**Objetivo:** Obter e exibir o valor digitado em um campo de entrada usando `getElementsByName` e `innerText`.

```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 3</title>
</head>
<body>
    <label>Nome: <input type="text" name="nome"></label>
    <button onclick="mostrarNome()">Enviar</button>
    <p id="resultado"></p>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Tarefa:**
Crie a função `mostrarNome()` que:

- Pegue o valor do campo de entrada pelo atributo `name="nome"` usando `getElementsByName`.
- Exiba o nome digitado no parágrafo com **id** `"resultado"`.

**Dica:** A propriedade `value` obtém o valor digitado pelo usuário.

---

## 4️⃣ Alterando a Fonte de um Elemento
**Objetivo:** Usar `querySelector` para modificar o estilo de um elemento.

```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 4</title>
</head>
<body>
    <p class="texto">Este é um texto de teste.</p>
    <button onclick="alterarFonte()">Mudar Fonte</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Tarefa:**
Crie a função `alterarFonte()` que:

- Use `querySelector` para selecionar o parágrafo da classe `"texto"`.
- Altere a fonte para `"Arial"` e aumente o tamanho da fonte para **20px**.

---

## 5️⃣  Selecionando Vários Elementos 
**Objetivo:** Usar `querySelectorAll` para modificar vários elementos ao mesmo tempo.

```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 5</title>
</head>
<body>
    <ul>
        <li class="item">Item 1</li>
        <li class="item">Item 2</li>
        <li class="item">Item 3</li>
    </ul>
    <button onclick="destacarItens()">Destacar</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Tarefa:**
Crie a função `destacarItens()` que:

- Use `querySelectorAll` para selecionar todos os elementos `<li>` da classe `"item"`.
- Aplique um fundo **amarelo** a cada um dos itens da lista.

--- 