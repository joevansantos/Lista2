#include <stdio.h>

int idade,tempo;

void leia ()
{
    printf("Digite a idade do trabalhador:");
    scanf("%d",&idade);
    printf("Digite a tempo de servico do trabalhador");
    scanf("%d",&tempo);
}



void calcule ()
{
       if ((idade >= 65) || (tempo > 30) ||
          ((idade >= 60) && (tempo > 25)) )
    {
        printf("Pode se aposentar!");
        }

    else
    {
        printf("nao pode se aposentar!");
    }
}



int main()
{
    leia();
    calcule();
    return 0;
}
