#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n1=4,n2=7,M[n1][n2],i,j,menor,im,jm,MinMax;
    for(i=0;i<n1;i++){
        printf("---------------------------------\n");
        for(j=0;j<n2;j++){
            scanf("%d",&M[i][j]);
        }
    }
    menor=M[0][0];
    im=0;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(menor>M[i][j]){
                menor=M[i][j];
                im=i;
            }
        }
    }
    MinMax=M[im][0];
    jm=0;
    for(j=0;j<n2;j++){
        if(M[im][j]>MinMax){
            MinMax=M[im][j];
            jm=j;
        }
    }
    printf("i=%d, j=%d e  MinMax=%d\n",im,jm,MinMax);
    return 0;
}

