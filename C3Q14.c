#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int An,Aa,Ia,If;
    printf("Digite o ano de nascimento e o ano atual: \n");
    scanf("%d %d",&An,&Aa);
    Ia=(Aa-An);
    If=2050-An;
    printf("Idade atual: %d -- Idade em 2050: %d\n",Ia,If);
    return 0;
}
