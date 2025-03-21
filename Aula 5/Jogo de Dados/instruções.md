# 🎲 Projeto: Jogo de Dados 🎲

### Objetivo
Criar um jogo simples onde dois jogadores "lançam" dados e o vencedor é determinado com base no número mais alto. Se os dois jogadores tirarem o mesmo número, o jogo resulta em um empate.

---

## 🔹 Passos para Construção

### Implementar a Lógica em JavaScript
- Crie um arquivo `script.js` e siga os passos abaixo:

#### 🔹 Gerar números aleatórios para os dados
- Use `Math.random()` para gerar um número entre 1 e 6 para cada jogador.
- Armazene os números gerados em variáveis.

#### 🔹 Atualizar as imagens dos dados
- Utilize `document.querySelectorAll("img")` para selecionar as imagens.
- Use `setAttribute("src", caminho-da-imagem)` para modificar a imagem do dado conforme o número aleatório gerado.

#### 🔹 Determinar o vencedor
- Compare os valores dos dois dados.
- Atualize o `<h1>` da página com o resultado:
    - "🚩 O Jogador 1 Venceu!" se o primeiro jogador tiver o maior número.
    - "O Jogador 2 Vencey! 🚩" se o segundo jogador ganhar.
    - "Empate!" se for empate.
