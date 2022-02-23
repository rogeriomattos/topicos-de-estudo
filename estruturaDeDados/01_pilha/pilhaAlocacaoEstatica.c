#include <stdio.h>
#include <stdlib.h>

typedef char Itemp;

typedef struct
{
  int max;
  int topo;
  Itemp itens[];
} Pilha;

Pilha createPilha(int max)
{
  Pilha p;
  p.max = max;
  p.topo = -1;
  return p;
}

int pilhaEstaVazia(Pilha p)
{
  if (p.topo == -1)
    return 1;
  return 0;
}

int pilhaEstaCheia(Pilha p)
{
  if (p.topo == p.max - 1)
    return 1;
  return 0;
}

Itemp getTopo(Pilha *p)
{
  if (pilhaEstaVazia(*p))
  {
    printf("Pilha vazia\n");
  }
  else
  {
    return p->itens[p->topo];
  }
}

void empilhar(Itemp item, Pilha *p)
{
  if (pilhaEstaCheia(*p))
  {
    printf("Pilha cheia\n");
  }
  else
  {
    p->topo++;
    p->itens[p->topo] = item;
  }
}

Itemp desempilhar(Pilha *p)
{
  if (pilhaEstaVazia(*p))
  {
    printf("Pilha vazia\n");
  }
  else
  {
    Itemp x = getTopo(p);
    p->topo--;
    return x;
  }
}

void main()
{

  Pilha p = createPilha(50);
  empilhar('R', &p);
  empilhar('O', &p);

  printf("%c\n", desempilhar(&p));
  printf("%c\n", desempilhar(&p));
}