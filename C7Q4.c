#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n1=10,n2=20,M[n1][n2],i,j,L[n1],soma,R[n1][n2];
    for(i=0;i<n1;i++){
        printf("---------------------------------\n");
        for(j=0;j<n2;j++){
            scanf("%d",&M[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        printf("---------------------------------\n");
        soma=0;
        for(j=0;j<n2;j++){
            soma=soma+M[i][j];
        }
        L[i]=soma;
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            R[i][j]=M[i][j]*L[i];
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}

