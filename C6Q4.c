#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n=8,v[n],ps[n],ng[n],i,cp,cn;
    printf("Digite o vetor:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    cn=0;
    cp=0;
    for(i=0;i<n;i++){
        if(v[i]>=0){
            ps[cp]=v[i];
            cp++;
        }
        else{
            ng[cn]=v[i];
            cn++;
        }
    }
    for(i=0;i<cp;i++){
        printf("+: %d\n",ps[i]);
    }
    printf("\n");
    for(i=0;i<cn;i++){
        printf("-: %d\n",ng[i]);
    }
    return 0;
}

