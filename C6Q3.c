#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n=10,v1[n],v2[n],v3[2*n],i,j;
    printf("Digite o v1:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    printf("Digite o v2:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v2[i]);
    }
    for(i=0;i<n;i++){
        v3[j]=v1[i];
        j=j+1;
        v3[j]=v2[i];
        j=j+1;
    }
    for(i=0;i<n;i++){
        printf("%d",v3[j]);
    }
    printf("\n");
    return 0;
}

