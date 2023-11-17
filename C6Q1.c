#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n=9,v[n],i,j,cont;
    printf("Digite o vetor:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        cont=0;
        for(j=1;j<=v[i];j++){
            if(v[i]%j==0){
                cont++;
            }
        }
        if(cont==2){
            printf("%d eh primo\n",v[i]);
        }
        else{
            printf("%d nao eh primo\n",v[i]);
        }
    }
    return 0;
}

