#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

void tabela(int x);

int main(void)
{
    int n;
    scanf("%d",&n);
    tabela(n);
    return 0;
}
void tabela(int x)
{
    int i,j;
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
}




