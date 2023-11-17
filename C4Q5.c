#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2,n3,n4;
    printf("Digite tres numeros diferentes e em ordem crescente:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("Digite um quarto numero qualquer:\n");
    scanf("%f",&n4);
    if(n4<n1){
        printf("%.1f - %.1f - %.1f - %.1f",n4,n1,n2,n3);
    }
    else if(n4>n1 && n4>n2 && n4<n3){
        printf("%.1f - %.1f - %.1f - %.1f",n1,n2,n4,n3);
    }
    else if(n4>n1 && n4<n2){
        printf("%.1f - %.1f - %.1f - %.1f",n1,n4,n2,n3);
    }
    else{
        printf("%.1f - %.1f - %.1f - %.1f",n1,n2,n3,n4);
    }
    return 0;
}

