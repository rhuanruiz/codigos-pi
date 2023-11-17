#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

struct cadastro{
    char loja[20],prod[20];
    float preco;
};

int main(void)
{
    struct cadastro c[10];
    int i,j;
    for (i=0;i<10;i++){
        printf("Digite o nome da loja %d\n",i+1);
        gets(c[i].loja);
    }
    printf("--------------------\n");
    for (i=0;i<10;i++){
        printf("Digite o nome do produto %d\n",i+1);
        gets(c[i].prod);
    }
    printf("--------------------\n");
    for (i=0;i<10;i++){
        printf("Loja %s-----------------\n",c[i].loja);
        printf("Digite o preco do %s\n",c[i].prod);
        scanf("%f",&c[i].preco);

    }
    printf("--------------------\n");
    for (i=0;i<10;i++){
        if (c[i].preco<120.0){
            printf("%s %s\n",c[i].prod,c[i].loja);
        }
    }
    return 0;
}

