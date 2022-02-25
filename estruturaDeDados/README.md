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

Ponteiro é uma variável que guarda o endereço de outra variável. Dizemos que um ponteiro “aponta” para uma varíável quando contém o endereço da mesma. Os ponteiros podem apontar para qualquer tipo de variável. Portanto temos ponteiros para int, float, double, etc. Exempl de ponteiro inteiro:

```c
  int x = 10;

  int *p;

  p = &x;


  printf("Endereco = %d\n", p);
  printf("valor = %d\n", *p);
```

Esse exemplo mostraria o resultado abaixo:

```cmd
Endereco = 6356720
Valor = 10
```

O primeiro printf mostra o endereço de memória que o ponteiro armazenou, no segundo printf ao passar p com *, o programa acessa o valor da variável que esta no endereço guardado.


## Pilha

Pilha é uma lista em que todas as operações de inserção, remoção e acesso são feitas num mesmo extremo, denominado topo.

Quando um item é inserido numa pilha, ele é colocado em seu top e, em qualquer instante, apenas o item no topo da pilha pode ser removido. Devido a essa política de acesso, os itens são removidos da pilha na ordem inversa àquela em que foram inseridos, ou seja, **o último a entrar é o primeiro a sair**

## Fila

Fila é uma lista em que as inserções são feitas num extremo, denominado final, e as remoçoes são feitas no extremo oposto, denominado início.

Quando um novo item é inserido numa fila, ele é colocado em seu final e, em qualquer instante, apenas o item no início da fila pode ser removido. **O primeiro a entra é o primeiro a sair.** Por isso, as filas também são denominadas listas FIFO (First-In/First-Out).

A principal propriedade de uma fila é a sua capacidade de manter a ordem de uma sequência.
