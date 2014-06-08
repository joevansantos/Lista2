#include <stdio.h>

int x,n,y,i;

void leia ()
{
   printf("Digite um numero de 3 digitos:");
   scanf("%d",&x);
}



void calcule ()
{
    n = (x % 10 * 100);
    x = (x / 10);
    y = (x % 10 * 10);
    x = (x / 10);
    x = (x % 10);
}

void imprime()

{
  printf("o numero invertido e: %d",n + x + y);
}



int main()
{
    leia();
    calcule();
    imprime();
    return 0;
}
