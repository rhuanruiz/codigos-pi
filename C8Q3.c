#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int soma(int x,int y,int z);

int main(void)
{
    int a,b,c,s;
    printf("Digite os dois numeros positivos:\n");
    scanf("%d %d",&b,&c);
    printf("Digite um numero maior que 1:\n");
    scanf("%d",&a);
    while(a<1){
        printf("Digite um numero MAIOR que 1:\n");
        scanf("%d",&a);
    }
    s=soma(a,b,c);
    printf("%d\n",s);
    return 0;
}
int soma(int x,int y,int z)
{
    int soma,i;
    soma=0;
    if(y>z){
        for(i=z;i<=y;i++){
            if(i%x==0){
                soma=soma+i;
            }
        }
    }
    else{
        for(i=y;i<=z;i++){
            if(i%x==0){
                soma=soma+i;
            }
        }
    }
    return soma;
}


