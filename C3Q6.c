#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float salb,sal;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o sal�rio base do funcion�rio: \n");
    scanf("%f",&salb);
    sal=salb+(salb*0.05);
    sal=sal-(sal*0.07);
    printf("O sal�rio do funcion�rio �: %f\n",sal);
    return 0;
}

