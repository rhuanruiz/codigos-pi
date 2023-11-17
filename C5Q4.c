#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n=5,i,cod,n_v,n_a,cod_max,cod_min,n_amax,n_amin,contA;
    float media,soma,mediaA,somaA;
    printf("Digite o codigo da cidade:\n");
    scanf("%d",&cod);
    printf("Digite o numero de veiculos de passeio:\n");
    scanf("%d",&n_v);
    printf("Digite numero de acidentes com vitimas:\n");
    scanf("%d",&n_a);
    printf("----------------------------------------\n");
    n_amax=n_a;
    n_amin=n_a;
    cod_min=cod;
    cod_max=cod;
    soma=n_v;
    somaA=0;
    contA=0;
    for(i=2;i<=n;i++){
        printf("Digite o codigo da cidade:\n");
        scanf("%d",&cod);
        printf("Digite o numero de veiculos de passeio:\n");
        scanf("%d",&n_v);
        printf("Digite numero de acidentes com vitimas:\n");
        scanf("%d",&n_a);
        printf("----------------------------------------\n");

        if(n_a>n_amax){
            n_amax=n_a;
            cod_max=cod;
        }
        if(n_a<n_amin){
            n_amin=n_a;
            cod_min=cod;
        }
        soma=soma+n_v;
        if(n_v<2000){
            somaA=somaA+n_a;
            contA++;
        }

    }
    printf("Maior indice de acidentes: Cidade %d -- %d acidentes\n",cod_max,n_amax);
    printf("Menor indice de acidentes: Cidade %d -- %d acidentes\n",cod_min,n_amin);
    media=soma/5.0;
    printf("Media de veiculos = %.2f\n",media);
    mediaA=somaA/contA;
    printf("Media de acidentes com menos de 2000 veiculos = %.2f\n",mediaA);
    return 0;
}

