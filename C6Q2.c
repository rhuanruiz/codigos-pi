#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    int n=10,v[n],i,aux,pos;
    float p[n],total,soma,com;
    for(i=0;i<n;i++){
        printf("---------------------------------------------\n");
        printf("Produto %d\n",i);
        printf("Digite o valor do produto:\n");
        scanf("%f",&p[i]);
        printf("Digite a quantidade vendida:\n");
        scanf("%d",&v[i]);
    }
    soma=0.0;
    for(i=0;i<n;i++){
        printf("---------------------------------------------\n");
        printf("Produto %d\n",i);
        printf("Valor unitario = %.2f -- Qnt. vendida = %d\n",p[i],v[i]);
        total=p[i]*v[i];
        printf("Total = %.2f\n",total);
        soma=soma+total;
    }
    printf("Total arrecado = %.2f\n",soma);
    com=0.05*soma;
    printf("Comissao do vendedor = %.2f\n",com);
    printf("Salario = %.2f\n",545+com);
    for(i=0;i<n;i++){
        if(i==0){
            aux=v[i];
            pos=i;
        }
        else{
            if(aux<v[i]){
                aux=v[i];
                pos=i;
            }
        }
    }
    printf("O objeto %d eh o mais vendido com %d vendas.",pos,aux);
    return 0;
}

