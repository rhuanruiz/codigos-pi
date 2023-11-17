#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i,n,qt;
    printf("Digite um numero inteiro maior que 1:\n");
    scanf("%d",&n);
    qt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            qt++;
        }
    }
    if(qt>2){
        printf("Numero nao primo.");
    }
    else{
        printf("Numero primo.");
    }
    return 0;
}

