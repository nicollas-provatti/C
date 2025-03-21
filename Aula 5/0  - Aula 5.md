# 📌  Manipulação do DOM no JavaScript

## 🔹 O que é DOM?

O **DOM (Document Object Model)** é uma interface de programação que representa a estrutura de um documento HTML ou XML como uma árvore de objetos:

![Alt text](https://hermes.dio.me/articles/cover/f3b3ba36-5377-4a95-8068-f1b09bec56c7.png "DOM")

Ele permite que os desenvolvedores manipulem o conteúdo, estrutura e estilo de uma página web dinamicamente através do JavaScript.

Quando uma página é carregada no navegador, o DOM é criado e pode ser acessado e modificado por meio de scripts. Isso possibilita:

- **Alteração** do conteúdo de elementos HTML.
- **Modificação** de estilos CSS.
- **Adição** ou remoção de elementos.
- **Respostas** a eventos do usuário.

--- 

## 🔹 Selecionando Elementos no DOM

O JavaScript permite selecionar elementos da página utilizando diferentes métodos:

#### **Por Marca (Tag)**
```javascript
let elementos = document.getElementsByTagName("p");
console.log(elementos); // Retorna um HTMLCollection de todos os <p>
```

#### **Por ID**
```javascript
let elemento = document.getElementById("meuId");
console.log(elemento); // Retorna o elemento com ID específico
```

#### **Por Classe**
```javascript
let elementos = document.getElementsByClassName("minhaClasse");
console.log(elementos); // Retorna um HTMLCollection com todos os elementos que possuem essa classe
```

#### **Por Nome**
```javascript
let elementos = document.getElementsByName("meuNome");
console.log(elementos); // Retorna um NodeList de elementos com o atributo name especificado
```

#### **Por Seletor**
```javascript
let elemento = document.querySelector(".classe"); // Retorna o primeiro elemento que corresponde ao seletor CSS
let elementos = document.querySelectorAll(".classe"); // Retorna todos os elementos que correspondem ao seletor CSS (NodeList)
```

<br>

### ❗ Diferença entre HTMLCollection e NodeList

- **HTMLCollection:** Retorna uma coleção dinâmica, ou seja, se um novo elemento for adicionado ao DOM, ele será refletido automaticamente na coleção.

- **NodeList:** Pode ser estático (quando retornado por querySelectorAll) ou dinâmico (quando retornado por childNodes). Se for estático, a lista não muda mesmo que novos elementos sejam adicionados ao DOM.

Para mais exemplos consulte o arqvuido **2.html**.

--- 

## 🔹 Propriedades do DOM

#### `innerHTML` e `innerText`

Essas propriedades são usadas para modificar o conteúdo de um elemento, mas têm diferenças:

```javascript
let elemento = document.getElementById("meuElemento");

// innerHTML altera ou recupera o HTML dentro do elemento
console.log(elemento.innerHTML);
elemento.innerHTML = "<strong>Novo conteúdo</strong>"; // Permite tags HTML

// innerText altera ou recupera apenas o texto dentro do elemento
console.log(elemento.innerText);
elemento.innerText = "Novo conteúdo"; // Ignora tags HTML, exibe apenas texto puro
```

#### `style`
Permite alterar estilos CSS diretamente via JavaScript:
```javascript
document.getElementById("meuElemento").style.color = "red";
document.getElementById("meuElemento").style.fontSize = "20px";
```

Para mais exemplos consulte o arquivo **3.html**.

**Observação:** Se for adicionar estilo por meio do JS faça isso por meio das classes e não alterando o estilo diretamente.

---

## 🔹 Manipulação de Atributos

Os atributos de um elemento HTML podem ser acessados e modificados usando os seguintes métodos:

| **Método**                  | **O que faz**                                              |
|-----------------------------|------------------------------------------------------------|
| `getAttribute(nome)`        | **Obtém** o valor de um atributo específico.               |
| `setAttribute(nome, valor)` | **Define** um novo valor para um atributo.                 |
| `removeAttribute(nome)`     | **Remove** um atributo de um elemento.                     |
| `hasAttribute(nome)`        | **Verifica** se um elemento possui um atributo específico. |

#### 🔸 Exemplos:
```javascript
let src = document.getElementById("imagem").getAttribute("src");
console.log(src);
```

```javascript
let src = document.getElementById("imagem").getAttribute("src");
```


```javascript
document.getElementById("imagem").removeAttribute("alt");
```

```javascript
let temAlt = document.getElementById("imagem").hasAttribute("alt");
console.log(temAlt); // true ou false
```

Para mais exemplos consulte o arquivo **4.html**.

---

## 🔹 Manipulação de Classes com `classList`

O `classList` permite adicionar, remover e alternar classes de um elemento HTML.

| **Método**                  | **O que faz**                                                                                  |
|-----------------------------|------------------------------------------------------------------------------------------------|
| `add(classe)`               | **Adiciona** uma classe ao elemento.                                                           |
| `remove(classe)`            | **Remove** uma classe do elemento.                                                             |
| `contains(classe)`          | **Verifica** se o elemento possui uma determinada classe.                                      |
| `toggle(classe)`            | **Alterna** entre adicionar e remover uma classe (se existe, remove; se não existe, adiciona). |

#### 🔸 Exemplos:
```javascript
document.getElementById("meuElemento").classList.add("nova-classe");
```

```javascript
document.getElementById("meuElemento").classList.remove("classe-antiga");
```

```javascript
if (document.getElementById("meuElemento").classList.contains("ativa")) {
  console.log("Elemento está ativo!");
}
```

```javascript
document.getElementById("meuElemento").classList.toggle("selecionado");
```

Para mais exemplos consulte o arquivo **5.html** e **6.html**.

---