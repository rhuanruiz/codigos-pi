#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

float percentual(float x,float y);

int main(void)
{
    float valor1,valor2,p;
    printf("Digite o antigo valor do produto:\n");
    scanf("%f",&valor1);
    printf("Digite o atual valor do produto:\n");
    scanf("%f",&valor2);
    p=percentual(valor1,valor2);
    printf("%.1f",p);
    return 0;
}
float percentual(float x,float y)
{
    return (y-x)/x*100;
}




