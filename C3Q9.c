#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float base,altura,A;
    printf("Digite o valor da base e altura do triangulo:\n");
    scanf("%f %f",&base,&altura);
    A=(base*altura)/2;
    printf("A area do triangulo eh = %f",A);
    return 0;
}

