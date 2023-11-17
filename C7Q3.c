#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int nl=4,np=4,i,j;
    char loja[nl][20],produto[np][20];
    float preco[8][4];
    for(i=0;i<nl;i++){
        printf("Digite o nome da loja %d: ",i+1);
        gets(loja[i]);
    }
    printf("----------------------------------\n");
    for(i=0;i<np;i++){
        printf("Digite o nome do produto %d: ",i+1);
        gets(produto[i]);
    }
    for(i=0;i<nl;i++){
        printf("----------------------------------\n%s\n----------------------------------\n",loja[i]);
        for(j=0;j<np;j++){
            printf("Preco do(a) %s: ",produto[j]);
            scanf("%f",&preco[i][j]);
        }
    }
    printf("----------------------------------\nProdutos abaixo de 120.0\n----------------------------------\n");
    for(i=0;i<nl;i++){
        for(j=0;j<np;j++){
            if(preco[i][j]<120);
                printf("%s -- %s\n",produto[j],loja[i]);
        }
    }
    return 0;
}

