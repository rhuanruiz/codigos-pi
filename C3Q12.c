#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2;
    printf("Digite dois numeros positivos e > que 0\n");
    scanf("%f %f",&n1,&n2);
    printf("Resposta 1 = %.1f\n",pow(n1,n2));
    printf("Resposta 2 = %.1f\n",pow(n2,n1));
    return 0;
}

