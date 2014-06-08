#include <stdio.h>
int x;

void ler()
{
   printf("Digite um numero:\n");
    scanf("%d",&x);
}


void calcule()
{
  x = x * x;
}


void imprime()
{
  printf("o quadrado e: %d",x);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
