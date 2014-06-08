#include <stdio.h>

float funcio1,funcio2,funcio3;


void calcule()
{
    funcio1=(780.000 * 0.46);
    funcio2=(780.000 * 0.32);
    funcio3=(780.000 * 0.22);;
}


void imprime()

{
    printf("\no primeiro ganhador ganhara: %.f.000",funcio1);
    printf("\no segundo ganhador ganhara: %.f.000",funcio2);
    printf("\no terceiro ganhador ganhara: %.f.000",funcio3);
}

int main()
{
   calcule();
   imprime();
    return 0;
}
