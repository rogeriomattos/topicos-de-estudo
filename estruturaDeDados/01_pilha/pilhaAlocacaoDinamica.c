#include <stdio.h>
#include <stdlib.h>

typedef int Itemp;

typedef struct pilha
{
  int max;
  int topo;
  Itemp *item;
} * Pilha;

Pilha createPilha(int max)
{
  Pilha p = malloc(sizeof(struct pilha));
  (*p).max = max;
  (*p).topo = -1;
  (*p).item = malloc(max * sizeof(Itemp));

  return p;
}

int pilhaEstaVazia(Pilha p)
{
  if ((*p).topo == -1)
    return 1;
  return 0;
}

int pilhaEstaCheia(Pilha p)
{
  if ((*p).topo == (*p).max - 1)
    return 1;
  return 0;
}

void empilhar(Itemp item, Pilha p)
{
  if (pilhaEstaCheia(p))
  {
    printf("A pilha está cheia\n");
    abort();
  }

  (*p).topo++;
  (*p).item[(*p).topo] = item;
}

Itemp desempilhar(Pilha p)
{
  if (pilhaEstaVazia(p))
  {
    printf("A pilha está vazia\n");
    abort();
  }
  Itemp x = (*p).item[(*p).topo];
  (*p).topo--;

  return x;
}

Itemp getTopo(Pilha p)
{
  if (pilhaEstaVazia(p))
  {
    printf("A pilha está vazia\n");
    abort();
  }

  return p->item[p->topo];
}

void destroiPilha(Pilha *Q)
{
  free((*Q)->item);
  free(*Q);
  *Q = NULL;
}

void main()
{
  Pilha p = createPilha(10);
  empilhar(1, p);
  empilhar(2, p);
  empilhar(3, p);
  int i;
  while (!pilhaEstaVazia(p))
  {
    printf("%d\n", getTopo(p));
    desempilhar(p);
  }
}