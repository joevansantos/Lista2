#include <stdio.h>

int i,j,p,vet[10],resposta;


void ler()
{
  for (i = 0;i < 10;i++)
  {
     printf("Digite um numero a ser usado:");
     scanf("%d",&vet[i]);

  }

}


void calcule()
{
    for (j = 0;j < 5;j++)
  {
      p = 5;
      printf("\nQual a soma de %d com %d:",vet[j], vet[p] );
      scanf("%d",&resposta);
      if (resposta == vet[j] + vet[p] )
      {
          printf("\nVc acertou!!");
      }
      else
      {
          printf("\nErrou!!");
      }
       j++;
       p++;
  }

}


void imprime()
{

}

int main()
{
  ler();
  calcule();
  return 0;
}

