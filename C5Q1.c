#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int ano,ano_atual;
    float sal,perc;
    printf("Digite o ano atual:\n");
    scanf("%d",&ano_atual);
    ano=2005;
    perc=0.0;
    sal=1000;
    printf("Ano = %d -- Perc = %.2f -- Sal = %.1f\n",ano,perc,sal);

    ano=2006;
    perc=0.015;
    sal=1000+(sal*perc);
    printf("Ano = %d -- Perc = %.2f -- Sal = %.1f\n",ano,perc,sal);

    for(ano=2007;ano<=ano_atual;ano++){
        perc=perc*2.0;
        sal=sal+(sal*perc);
        printf("Ano = %d -- Perc = %.2f -- Sal = %.1f\n",ano,perc,sal);
    }
    return 0;
}

