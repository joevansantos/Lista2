#include <stdio.h>

int x;

void leia ()
{
   printf("Digite um numero");
   scanf ("%d",&x);
}



void imprime ()
{
    printf("o antecessor e: %d\n",x - 1);
    printf("o sucessor e:%d\n",x + 1);        ;

}



int main()
{
    leia();
    imprime();
    return 0;
}
