#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float a,h,pi,medida,rad;
    pi=3.14;
    printf("Digite o angulo:\n");
    scanf("%f",&a);
    printf("Digite o valor da altura:\n");
    scanf("%f",&h);
    rad=a*pi/180;
    medida=h/sin(rad);
    printf("A medida da escada eh = %f",medida);
    return 0;
}
