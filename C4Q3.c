#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2;
    printf("Digite dois numeros:\n");
    scanf("%f %f",&n1,&n2);
    if(n1>n2){
        printf("%.1f eh o maior numero",n1);
    }
    else if(n2>n1){
        printf("%.1f eh o maior numero",n2);
    }
    else if(n1=n2){
        printf("Os numeros sao iguais");
    }
    return 0;
}

