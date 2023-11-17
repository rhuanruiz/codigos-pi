#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n1,n2,**m,**r,*v,i,j,soma;
    scanf("%d %d",&n1,&n2);
    m = (int**)malloc(n1*sizeof(int*));
    for(i=0;i<n1;i++){
        m[i] = (int*)malloc(n2*sizeof(int));
    }
    r = (int**)malloc(n1*sizeof(int*));
    for(i=0;i<n1;i++){
        r[i] = (int*)malloc(n2*sizeof(int));
    }
    v = (int*)malloc(n1*sizeof(int));
    for(i=0;i<n1;i++){
        soma=0;
        for(j=0;j<n2;j++){
            scanf("%d",m[i][j]);
            soma=soma+m[i][j];
        }
        v[i]=soma;
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            r[i][j]=m[i][j]*v[i];
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n1;i++){
        free(m[i]);
    }
    free(m);
    for(i=0;i<n1;i++){
        free(r[i]);
    }
    free(r);
    free(v);
    return 0;
}

