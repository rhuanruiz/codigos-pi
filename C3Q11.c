#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n,quadrado,cubo,raiz2,raiz3;
    printf("Digite um numero postivo e > que zero:\n");
    scanf("%f",&n);
    quadrado=pow(n,2);
    cubo=pow(n,3);
    raiz2=pow(n,1.0/2.0);
    raiz3=pow(n,1.0/3.0);
    printf("Qudrado = %.1f -- Cubo = %.1f -- Raiz Quadrada = %.1f -- Raiz Cubica = %.1f\n",quadrado,cubo,raiz2,raiz3);
    return 0;
}

