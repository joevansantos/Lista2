#include <stdio.h>

int venda;
float com;


void leia ()
{
    printf("Digite a venda:");
    scanf("%d",&venda);
}



void calcule ()
{
       if (venda >= 100.000 )
    {
        com = 700 +(venda * 0,16);
    }
    if (venda < 100.000 && venda >= 80.000 )
    {
        com = 650 +(venda * 0,14);
    }
    if (venda < 80.000 && venda >= 60.000 )
    {
        com = 600 +(venda * 0,14);
    }
    if (venda < 60.000 && venda >= 40.000 )
    {
        com = 550 +(venda * 0,14);
    }
    if (venda < 40.000 && venda >= 20.000 )
    {
        com = 500.000 +(venda * 0,14);
    }

}

void imprime()

{
   printf("o valor da comissao foi: %.f.00",com);
}

int main()
{
    leia();
    calcule();
    imprime();
    return 0;
}

