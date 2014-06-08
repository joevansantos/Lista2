#include <stdio.h>

float salario,prestacao,x;

void leia ()
{
    printf("Digite o salario do funcionario:");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao:");
    scanf("%f",&prestacao);
}


void calcule()
{
    x = (salario * 0.2);
}


void imprime()

{
  if (prestacao > x)
    {
        printf("Emprestimo nao concedido!");
    }
    else
    {
       printf("Emprestimo concedido!");
    }

}


int main()
{
   leia();
   calcule();
   imprime();
    return 0;
}
