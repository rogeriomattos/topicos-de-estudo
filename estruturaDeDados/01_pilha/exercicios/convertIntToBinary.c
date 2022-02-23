/*
  Crie um programa que lê um número inteiro e converta ele para binário, usando pilha.
*/
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct
{
  int topo;
  int max;
  Item *item;
} * Pilha;

Pilha createPilha(int maxLength)
{
  Pilha p = malloc(sizeof(Pilha));
  p->max = maxLength;
  p->topo = -1;
  p->item = malloc(sizeof(Item));
  return p;
}

void insertPilha(Item item, Pilha p)
{
  p->topo++;
  p->item[p->topo] = item;
}

Item removePilha(Pilha p)
{
  Item x = getTopo(p);
  p->topo--;

  return x;
}

Item getTopo(Pilha p)
{
  return p->item[p->topo];
}

int pilhaVazia(Pilha p)
{
  if (p->topo == -1)
    return 1;

  return 0;
}

void main()
{
  Pilha p = createPilha(32);
  int number;
  printf("Digite um numero: ");
  scanf("%d", &number);
  int aux = number;

  while (aux > 0)
  {
    insertPilha(aux % 2, p);
    aux = aux / 2;
  }

  printf("%d = ", number);

  do
  {

    int f = removePilha(p);
    printf("%d", f);
  } while (!pilhaVazia(p));
}
