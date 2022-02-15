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