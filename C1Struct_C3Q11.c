#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

struct calc{
    float quad,cubo,raiz,raiz3;
};

int main(void)
{
    struct calc v[5];
    float x;
    int i;
    for(i=0;i<5;i++){
        scanf("%f",&x);
        v[i].quad=x*x;
        v[i].cubo=x*x*x;
        v[i].raiz=sqrt(x);
        v[i].raiz3=pow(x,(1.0/3.0));
    }
    for(i=0;i<5;i++){
        printf("%.1f ",v[i].quad);
        printf("%.1f ",v[i].cubo);
        printf("%.1f ",v[i].raiz);
        printf("%.1f \n",v[i].raiz3);
    }
    return 0;
}

