#include <stdio.h>
#include <math.h>
#include<stdlib.h>

float a,b,c;

void leia ()
{
    printf("Digite um lado do triangulo:");
    scanf("%f",&a);
    printf("Digite outro lado do triangulo:");
    scanf("%f",&b);;
}

void calcule()
{
    c = sqrt(a*a + b*b);
}

void imprime()

{
  printf("\no  tamanho da hipotenusa e: %f.",c );
}

int main()
{
   leia();
   calcule();
   imprime();
    return 0;
}
