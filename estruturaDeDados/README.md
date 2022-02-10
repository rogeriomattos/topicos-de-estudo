# Estrutura de Dados

## Mecanismos de agregação de dados

- 1. Vetor

Vetor é um mecanismo que agrega vários itens de um mesmo tipo, formando uma coleção homogênia. Em C, os itens de um vetor ocupam posições adjacentes de memória e são identificados por indíces, a partir de 0. Por exemplo:

```c
int vetor[3] = {3, 5, 7};
int i = 0;

for (i = 0; i < 3; i++)
{
  printf("indice %d possui o valor %d\n", i, vetor[i]);
}

```

Esse exemplo mostraria o resultado abaixo:

```cmd
indice 0 possui o valor 3
indice 1 possui o valor 5
indice 2 possui o valor 7
```

- 2. Registro (struct)

- 3. Ponteiro