#include <stdio.h>

void main()
{
  int x = 10;
  int *p = &x;

  printf("Endereco da memoria %d\n", &p);
  printf("Valor %d\n", *p);

  // Como acessar usar vetor com ponteiro
  int vetor[3] = {6, 109, -4};
  int *pVetor = &vetor;

  printf("\nEndereco da memoria do vetor %d\n", &pVetor);
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("Index %d do vetor\n", i);
    printf("Endereco %d \n", pVetor + i);
    printf("Valor %d\n\n", *(pVetor + i));
  }

  // Como acessar usar struct com ponteiro
  typedef struct
  {
    int a;
    char b;
    float c;
  } Reg;

  Reg r = {10, 'A', 4.5};
  Reg *pReg = &r;

  printf("Item a\n");
  printf("Endereco %d \n", pReg + 1);
  printf("Valor %d\n\n", (*pReg).a);

  printf("Item b\n");
  printf("Endereco %d \n", pReg + 2);
  printf("Valor %c\n\n", (*pReg).b);

  printf("Item c\n");
  printf("Endereco %d \n", pReg + 3);
  printf("Valor %.2f\n\n", (*pReg).c);
}