# 🏦 Projeto: Sistema Bancário Simples
## 📌 Descrição
O sistema permitirá que um banco gerencie contas de clientes, possibilitando operações básicas como cadastro, depósitos, saques e transferências.

Cada conta terá as seguintes informações:
- Nome do Cliente (`string`)
- Tipo da Conta (`string`)
- Número da Conta (`int`)
- Saldo (`float`)

## 🛠️ Funcionalidades Obrigatórias

1. **Criar uma conta:** O usuário pode cadastrar um novo cliente informando `nome, tipo da conta e o número da conta`. O saldo inicial será `zero`.

2. **Exibir todas as contas cadastradas:** O sistema lista `todas as contas` mostrando nome, número da conta e saldo atual.

3. **Depositar dinheiro:** O usuário informa um `número de conta` e um `valor` a ser depositado. O saldo da conta aumenta conforme o valor depositado.

4. **Sacar dinheiro:** O usuário informa `um número de conta` e um `valor` a ser sacado. O saque só ocorre se houver **saldo suficiente** na conta.

5. **Transferir dinheiro entre contas:** O usuário pode transferir um `valor` de uma conta para outra. O sistema verifica se a conta de origem tem saldo suficiente antes de completar a transferência.

6. **Buscar conta por número:** O usuário pode digitar um `número de conta` e visualizar os detalhes do cliente e saldo atual.
