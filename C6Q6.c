#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n=10,v[n],i,j,aux;
    printf("Digite o vetor:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(v[j]<v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
    printf("\n");
    return 0;
}

