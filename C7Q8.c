#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n1=6,n2=4,M[n1][n2],N[n1][n2],i,j,cont30=0;
    for(i=0;i<n1;i++){
        printf("---------------------------------\n");
        for(j=0;j<n2;j++){
            scanf("%d",&M[i][j]);
        }
    }
    printf("---------------------------------\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(M[i][j]>30){
                cont30++;
            }
        }
    }
    printf("%d\n",cont30);
    printf("---------------------------------\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(M[i][j]==30){
                N[i][j]=0;
            }else{
                N[i][j]=M[i][j];
            }
            printf("%d ",N[i][j]);
        }
        printf("\n");
    }
    return 0;
}

