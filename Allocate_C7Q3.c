#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    char **loja,**prod;
    int nl,np,i,j;
    float **preco;
    printf("Digite a quantidade de lojas:\n");
    scanf("%d",&nl);
    printf("Digite a quantidade de produtos:\n");
    scanf("%d",&np);
    printf("---------------------------------\n");
    loja = (char**)malloc(nl*sizeof(char*));
    for(i=0;i<nl;i++){
        loja[i] = (char*)malloc(20*sizeof(char));
    }
    prod = (char**)malloc(np*sizeof(char*));
    for(i=0;i<np;i++){
        prod[i] = (char*)malloc(20*sizeof(char));
    }
    preco = (float**)malloc(nl*sizeof(float*));
    for(i=0;i<nl;i++){
        preco[i] = (float*)malloc(np*sizeof(float*));
    }
    for(i=0;i<nl;i++){
        printf("Digite o nome da loja %d\n",i+1);
        getchar( );
        gets(loja[i]);
    }
    printf("--------------------\n");
    for(i=0;i<np;i++){
        printf("Digite o nome do produto %d\n",i+1);
        getchar( );
        gets(prod[i]);
    }
    printf("--------------------\n");
    for(i=0;i<nl;i++){
        printf("Loja %s-----------------\n",loja[i]);
        for(j=0;j<np;j++){
            printf("Digite o preco do %s\n",prod[j]);
            scanf("%f",&preco[i][j]);
        }
    }
    printf("--------------------\n");
    for(i=0;i<nl;i++){
        for(j=0;j<np;j++){
            if(preco[i][j]<120.0){
                printf("%s %s\n",prod[j],loja[i]);
            }
        }
    }
    for(i=0;i<nl;i++){
        free(loja[i]);
    }
    free(loja);
    for(i=0;i<np;i++){
        free(prod[i]);
    }
    free(prod);
    for(i=0;i<nl;i++){
        free(preco[i]);
    }
    free(preco);
    return 0;
}

