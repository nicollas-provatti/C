# 👨🏻‍🎓 Sistema de Gerenciamento de Alunos

Este sistema será responsável por armazenar e gerenciar informações de alunos de uma instituição.

## 🏗️ Estrutura do Aluno (Struct)
Cada aluno terá os seguintes atributos:
- Matrícula (`inteiro`)
- Nome (`string`)
- Idade (`inteiro`)
- Curso (`string`)
- Média das Notas (`float`)

## 👨🏻‍💻 Funcionalidades
1. **Cadastrar aluno** – Adiciona um novo aluno ao sistema.
2. **Listar alunos** – Exibe todos os alunos cadastrados.
3. **Buscar aluno por matrícula** – Permite procurar um aluno pelo número de matrícula.
4. **Atualizar informações do aluno** – Modifica os dados de um aluno existente.
5. **Remover aluno**– Exclui um aluno do sistema.
6. **Salvar e carregar dados do arquivo** – Os alunos serão armazenados em um arquivo, garantindo que os dados sejam recuperados na próxima execução. Essa ação finaliza o programa.

---

# 📚 Sistema de Gerenciamento de Biblioteca

Este sistema gerenciará os livros de uma biblioteca, permitindo controle sobre empréstimos e devoluções.

## 🏗️ Estrutura do Livro (Struct)
Cada livro terá os seguintes atributos:
- Código do Livro (`inteiro`)
- Título (`string`)
- Autor (`string`)
- Ano de Publicação (`inteiro`)
- Disponibilidade (`inteiro`, 1 para disponível e 0 para emprestado)

## 👨🏻‍💻 Funcionalidades
1. **Adicionar livro** – Permite cadastrar um novo livro.
2. **Listar todos os livros** – Mostra todos os livros cadastrados.
3. **Buscar livro por título ou autor** – Facilita encontrar um livro no sistema.
4. **Realizar empréstimo** – Marca um livro como emprestado, alterando sua disponibilidade.
5. **Registrar devolução** – Atualiza a disponibilidade do livro devolvido.
6. **Salvar e carregar dados do arquivo** – Garante que os livros cadastrados sejam armazenados para uso futuro. Essa ação finaliza o programa.

---

# 🛒 Sistema de Gerenciamento de um E-commerce

Este sistema permitirá gerenciar produtos e vendas de um e-commerce simples.

## 🏗️ Estrutura do Produto (Struct)
Cada produto terá os seguintes atributos:
- Código do Produto (`inteiro`)
- Nome (`strin`g)
- Categoria (`string`)
- Preço (`float`)
- Quantidade em estoque (`inteiro`)

## 👨🏻‍💻 Funcionalidades
1. **Cadastrar produto** – Adiciona um novo produto ao estoque.
2. **Listar todos os produtos** – Exibe todos os produtos disponíveis.
3. **Buscar produto por nome ou categoria** – Permite pesquisar produtos no sistema.
4. **Atualizar estoque** – Modifica a quantidade disponível de um produto.
5. **Realizar venda** – Diminui a quantidade do produto no estoque e registra a venda.
6. **Salvar e carregar dados do arquivo** – Os produtos e vendas serão armazenados para garantir a persistência dos dados. Essa ação finaliza o programa.

---