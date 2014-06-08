#include <stdio.h>

float salario,aumento;

void leia ()
{
  printf("Digite o salario do funcionario:");
  scanf("%f",&salario);
}

void calcule()
{
    aumento=(salario*0,25);
    salario = salario + aumento;
}

void imprime()

{
  printf("\no novo salario e: %.f.00",salario);
}

int main()
{
   leia();
   calcule();
   imprime();
    return 0;
}
