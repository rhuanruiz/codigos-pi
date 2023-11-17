#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int M[2][2],R[2][2],i,j,maior,im,jm;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&M[i][j]);
        }
    }
    maior=M[0][0];
    im=0;
    jm=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(M[i][j]>maior){
                maior=M[i][j];
                im=i;
                jm=j;
            }
        }
    }
    printf("Maior = %d\n",maior);
    printf("im = %d -- jm = %d\n",im,jm);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            R[i][j]=M[i][j]*maior;
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
    return 0;
}

