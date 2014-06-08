#include<stdio.h>
#include <conio.h>

int x,y,z,escolha;

void leia()

{
    printf("Digite um numero:");
    scanf("%d",&x);
    printf("Digite um numero:");
    scanf("%d",&y);
}

void calcule()
{
    printf("\n 1 - Soma ");
    printf("\n 2 - Diferença");
    printf("\n 3 - Produto entre 2 números");
    printf("\n 4 - Divisão entre 2 números ");
    printf("\n 5 - Fechar Programa ");
    printf("\n\n Escolha uma opcao: ");
    scanf("%d",&escolha);
}

void imprime()

{
    switch(escolha)
    {
    case 1:
        {
         z = x + y;
        printf("A soma dos numeros: %d ",z);
        break;
        }
     case 2:
        {
         z = x - y;
        printf("A diferenca dos numeros: %d ",z);
        break;
        }
      case 3:
        {
         z = x / y;
        printf("A divisao dos numeros: %d ",z);
        break;
        }
       case 4:
        {
         z = x * y;
        printf("A multiplicacao dos numeros: %d ",z);
        break;
        }
        default:
        {
        printf("A opcao e invalida");
        break;
        }

}


}

int main()
{
    leia();
    calcule();
    imprime();
    return 0;
}

