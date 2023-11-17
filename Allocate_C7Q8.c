#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n1,n2,**m,i,j,cont30=0;
    scanf("%d %d",&n1,&n2);
    m = (int**)malloc(n1*sizeof(int*));
    for(i=0;i<n1;i++){
        m[i] = (int*)malloc(n2*sizeof(int));
        for(j=0;j<n2;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]>30){
                cont30++;
            }
            else if(m[i][j]==30){
                m[i][j]=0;
            }
        }
    }
    printf("%d\n",cont30);
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n1;i++){
        free(m[i]);
    }
    free(m);
    return 0;
}

