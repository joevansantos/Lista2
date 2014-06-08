#include <stdio.h>

float dias,imposto,salario;

void leia ()
{
  printf("Digite os dias do funcionario:");
  scanf("%f",&dias);
}

void calcule()
{
    dias = (dias * 30);
    imposto = (dias * 0.08);
    salario =(dias - imposto);
}

void imprime()

{
  printf("\no  salario do trabalador e: %.f.000",salario);
}

int main()
{
   leia();
   calcule();
   imprime();
    return 0;
}
