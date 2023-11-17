#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i;
    float n1,n2,n,soma,raiz;
    printf("Menu de opcoes:\n1. Somar dois numeros.\n2. Raiz quadrada de um numero\nDigite a opcao desejada:\n");
    scanf("%d",&i);
    if(i==1){
        printf("Digite dois numeros:\n");
        scanf("%f %f",&n1,&n2);
        soma=n1+n2;
        printf("Soma = %.1f",soma);
    }
    else if(i==2){
        printf("Digite um numero:\n");
        scanf("%f",&n);
        raiz=pow(n,0.5);
        printf("Raiz = %.1f",raiz);
    }
    return 0;
}

