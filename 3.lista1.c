#include <stdio.h>

int x,y,z;

void leia()

{
  printf("Digite um numero:\n");
  scanf("%d",&x);
  printf("Digite um numero:\n");
  scanf("%d",&y);
  printf("Digite um numero:\n");
  scanf("%d",&z);
}

void calcule()
{
    x = x * x;
    y = y * y;
    z = z * z;
}

void imprime()

{
    printf("o quadrado e: %d\n",x);

    printf("o quadrado e: %d\n",y);

    printf("o quadrado e: %d\n",z);

    printf("a soma dos quadrado e: %d\n",z + x + y);
}

int main()
{
    leia();
    calcule();
    imprime();
    return 0;
}
