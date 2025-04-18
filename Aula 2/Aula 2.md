## Estruturas de Decisão
As estruturas de decisão permitem que um programa tome decisões baseadas em condições. Em C, as principais estruturas são `if`, `if-else`, `if-else if`, `switch`.

### `if` (Simples)
```c
int idade = 18;
if (idade >= 18) {
    printf("Maior de idade\n");
}
```

### `if-else`
```c
int idade = 16;
if (idade >= 18) {
    printf("Maior de idade\n");
} else {
    printf("Menor de idade\n");
}
```

### `if-else` Aninhado
```c
int idade = 20;
if (idade >= 18) {
    if (idade >= 65) {
        printf("Idoso\n");
    } else {
        printf("Adulto\n");
    }
} else {
    printf("Menor de idade\n");
}
```

### `else if`
```c
int nota = 85;
if (nota >= 90) {
    printf("A\n");
} else if (nota >= 80) {
    printf("B\n");
} else if (nota >= 70) {
    printf("C\n");
} else {
    printf("Reprovado\n");
}
```

### `switch`
```c
int opcao = 2;
switch(opcao) {
    case 1:
        printf("Opção 1 selecionada\n");
        break;
    case 2:
        printf("Opção 2 selecionada\n");
        break;
    default:
        printf("Opção inválida\n");
}
```

---

## Estruturas de Repetição

### `for`
```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### `while`
```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

### `do-while`
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

---

## Diferenças entre os Laços e Quando Usar Cada Um
- **`for`**: Quando o número de repetições é conhecido.
- **`while`**: Quando a repetição depende de uma condição que pode mudar dentro do loop.
- **`do-while`**: Quando é necessário garantir que o bloco será executado ao menos uma vez.

Exemplo:
```c
int senha;
do {
    printf("Digite a senha correta: ");
    scanf("%d", &senha);
} while (senha != 1234);
```

---
