#include <stdio.h>

int main(void)
{
  int vetor[3] = {3, 5, 7};
  int i = 0;

  for (i = 0; i < 3; i++)
  {
    printf("indice %d possui o valor %d\n", i, vetor[i]);
  }
}