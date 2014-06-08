#include <stdio.h>
#include <math.h>


float  h,ideal;
char sexo;

void ler()
{
 printf("Digite a altura:");
 scanf("%f",&h);
 printf ("Digite o sexo da pessoa:");
 printf("\nh para homens e m para mulheres:");
 scanf("%c " ,&sexo);
}


void calcule()
{
  if (sexo == 'h')
  {
      ideal = (72.7 *h);
  }

  if (sexo == 'm')
  {
      ideal = (62.1 *h);
  }
}


void imprime()
{
  printf("\nO peso ideal : %.2f ",ideal);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
