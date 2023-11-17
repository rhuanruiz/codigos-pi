#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n=8,i,n1,n2,soma;
    n1=0;
    n2=1;
    printf("%d\n%d\n",n1,n2);
    for(i=3;i<=n;i++){
        soma=n1+n2;
        printf("%d\n",soma);
        n1=n2;
        n2=soma;
    }
    return 0;
}

