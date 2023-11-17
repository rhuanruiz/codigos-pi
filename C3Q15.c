#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float preco_I,perc_L,perc_I,preco_F,lucro,imposto;
    printf("Digite o preco de fabrica do veiculo: \n");
    scanf("%f",&preco_I);
    printf("Digite o percentual de lucro e o percentual de impostos: \n");
    scanf("%f %f",&perc_L,&perc_I);
    lucro=preco_I*(perc_L/100);
    imposto=preco_I*(perc_I/100);
    preco_F=preco_I+lucro+imposto;
    printf("Lucro do distribuidor = %.2f -- Impostos = %.2f -- Preco final do veiculo = %.2f",lucro,imposto,preco_F);
    return 0;
}
