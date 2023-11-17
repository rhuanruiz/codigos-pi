#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float pe,jarda,milha,polegada;
    printf("Digite um valor em pes: \n");
    scanf("%f",&pe);
    polegada=pe*12.0;
    jarda=pe/3.0;
    milha=jarda/1.760;
    printf("O valor em polegadas eh: %.1f\n",polegada);
    printf("O valor em jardas eh: %.1f\n",jarda);
    printf("O valor em milhas eh: %.1f\n",milha);
    return 0;
}
