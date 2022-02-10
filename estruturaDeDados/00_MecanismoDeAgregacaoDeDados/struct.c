#include <stdio.h>

int main(void)
{

  typedef struct
  {
    int a;
    char b;
    float c;
  } Reg;

  Reg registro = {20, 'd', 78.5};

  printf("a = %d\n", registro.a);
  printf("b = %c\n", registro.b);
  printf("c = %.2f\n", registro.c);
}