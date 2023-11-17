#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int M1[4][5],M2[5][2],i,j,k,R[4][2];
    for(i=0;i<4;i++){
        printf("---------------------------------\n");
        for(j=0;j<5;j++){
            scanf("%d",&M1[i][j]);
        }
    }
    for(i=0;i<5;i++){
        printf("---------------------------------\n");
        for(j=0;j<2;j++){
            scanf("%d",&M2[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            R[i][j]=0;
            for(k=0;k<5;k++){
                R[i][j]=R[i][j]+M1[i][k]*M2[k][j];
            }
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}

