#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int N,i,j,fat;
    float E;
    printf("Digite um valor N inteiro e positivo:\n");
    scanf("%d",&N);
    E=1.0;
    for(j=1;j<=N;j++){
        fat=1;
        for(i=1;i<=j;i++){
            fat=fat*i;
        }
        E=E+1.0/fat;
    }
    printf("%f",E);
    return 0;
}

