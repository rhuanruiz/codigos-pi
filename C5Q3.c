#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int N,i,j;
    float fat;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d",&N);
    fat=1.0;
    for(i=1;i<=N;i++){
        fat=fat*i;
        printf("Valor lido = %d -- Fatorial = %.1f\n",i,fat);
    }
    return 0;
}

