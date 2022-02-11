# Estrutura de Dados

## Mecanismos de agregação de dados

### 1. Vetor

Vetor é um mecanismo que agrega vários itens de um mesmo tipo, formando uma coleção homogênia. Em C, os itens de um vetor ocupam posições adjacentes de memória (i.e. cada item ocupa uma posição da memória em sequência) e são identificados por indíces, a partir de 0. Por exemplo:

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

### 2. Registro (struct)

Registro (struct) é um mecanismo que agrega vários itens de tipos diferentes, formando uma coleção heterogênea. Em C, os itens de um registro ocupam posições adjacentes de memória e são identificados por campos. Além de que, antes de criar um registro é necessario definir seu tipo (i.e. sua struct).

```c
  typedef struct
  {
    int a;
    char b;
    float c;
  } Reg;

  Reg registro = {20, 'd', 78.5};
  ```

### 3. Ponteiro
