# Exercícios

## 1️⃣ Obtendo um Atributo
**Objetivo:** Ler o valor do atributo href de um link usando `getAttribute`.

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
    <a id="meuLink" href="https://www.google.com">Google</a>
    <button onclick="mostrarHref()">Mostrar URL</button>
    <p id="resultado"></p>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `mostrarHref()` que:

- Pegue o atributo `href` do link com **id** `"meuLink"` usando `getAttribute`.
- Exiba a URL dentro do parágrafo com **id** `"resultado"`.
--- 

## 2️⃣ Adicionando um Atributo
**Objetivo:** Adicionar um atributo `disabled` a um botão usando `setAttribute`.

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
    <button id="meuBotao">Clique Aqui</button>
    <button onclick="desativarBotao()">Desativar</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `desativarBotao()` que:

- Use `setAttribute` para adicionar o atributo `disabled` ao botão com **id** `"meuBotao"`, impedindo que ele seja clicado.
--- 

## 3️⃣ Removendo um Atributo
**Objetivo:** Remover o atributo `readonly` de um campo de entrada.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 3</title>
</head>
<body>
    <input type="text" id="campoTexto" value="Texto bloqueado" readonly>
    <button onclick="habilitarCampo()">Habilitar</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `habilitarCampo()` que:

- Use `removeAttribute` para remover o atributo `readonly` do campo de entrada com **id** `"campoTexto"`, permitindo que o usuário digite.

--- 

## 4️⃣ Tem o Atributo ?
**Objetivo:** Verificar se um campo de entrada possui o atributo `disabled`.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 4</title>
</head>
<body>
    <input type="text" id="inputCampo" disabled>
    <button onclick="verificarAtributo()">Verificar</button>
    <p id="mensagem"></p>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `verificarAtributo()` que:

- Verifique se o campo de entrada com **id** `"inputCampo"` tem o atributo `disabled` usando `hasAttribute`.
- Exiba no parágrafo com **id** `"mensagem"` a mensagem **"O campo está desativado."** ou **"O campo está ativo."**.
--- 

## 5️⃣  Adicionando uma Classe
**Objetivo:** Aplicar uma classe de estilo a um botão.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 5</title>
    <style>
        .destaque {
            background-color: yellow;
            font-weight: bold;
        }
    </style>
</head>
<body>
    <button id="botao">Clique Aqui</button>
    <button onclick="destacarBotao()">Destacar</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `destacarBotao()` que:

- Use `classList.add` para adicionar a classe `"destaque"` ao botão com **id** `"botao"`, aplicando o estilo de fundo amarelo e negrito.

--- 

## 6️⃣ Removendo uma Classe
**Objetivo:** Remover uma classe de destaque de um texto.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 6</title>
    <style>
        .realce {
            color: red;
            font-size: 20px;
        }
    </style>
</head>
<body>
    <p id="texto" class="realce">Texto Importante</p>
    <button onclick="removerDestaque()">Remover Estilo</button>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `removerDestaque()` que:

- Use `classList.remove` para remover a classe `"realce"` do parágrafo com **id** `"texto"`, retornando ao estilo normal.

--- 

## 7️⃣ Possui a Classe ?
**Objetivo:** Checar se um botão possui uma classe específica e exibir uma mensagem.

**Código HTML:**
```html
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 7</title>
    <style>
        .ativo {
            background-color: green;
            color: white;
        }
    </style>
</head>
<body>
    <button id="meuBotao" class="ativo">Botão</button>
    <button onclick="verificarClasse()">Verificar</button>
    <p id="resultado"></p>

    <script>
        // Escreva o código aqui
    </script>
</body>
</html>
```

**Terefa:**
Crie a função `verificarClasse()` que:

- Use `classList.contains` para verificar se o botão tem a classe `"ativo"`.
- Exiba a mensagem **"O botão está ativo."** ou **"O botão não está ativo."** no parágrafo com **id** `"resultado`.
- Refaça usando `classList.toggle`

--- 