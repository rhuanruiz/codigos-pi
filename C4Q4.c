#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2,n3;
    printf("Digite tres numeros diferentes:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    if (n1>n2 && n1>n3){
        if(n2>n3){
            printf("%.1f,%.1f,%.1f",n1,n2,n3);
        }else{
            printf("%.1f,%.1f,%.1f",n1,n3,n2);
        }
    }
    else if(n2>n1 && n2>n3){
        if(n1>n3){
            printf("%.1f%,%.1f,%.1f",n2,n1,n3);
        }else{
            printf("%.1f,%.1f,%.1f",n2,n3,n1);
        }
    }
    else{
        if(n1>n2){
            printf("%.1f,%.1f,%.1f",n3,n1,n2);
        }else{
            printf("%.1f,%.1f,%.1f",n3,n2,n1);
        }
    }
    return 0;
}

