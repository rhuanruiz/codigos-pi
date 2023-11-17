#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int soma(int x,int y);

int main(void)
{
    int n1,n2,s;
    printf("Digite os dois numeros positivos:\n");
    scanf("%d %d",&n1,&n2);
    s=soma(n1,n2);
    printf("%d\n",s);
    return 0;
}
int soma(int x,int y)
{
    int soma, i;
    soma=0;
    if(x>y){
        for(i=y+1;i<x;i++){
            soma=soma+i;
        }
    }
    else{
        for(i=x+1;i<y;i++){
            soma=soma+i;
        }
    }
    return soma;
}

