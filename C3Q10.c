#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float pi,r,A;
    printf("Digite o valor do raio:\n");
    scanf("%f",&r);
    pi=3,14;
    A=pi*(pow(r,2));
    printf("A area do circulo eh = %f",A);
    return 0;
}

