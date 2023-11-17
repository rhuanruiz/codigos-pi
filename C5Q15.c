#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i,n=6,refri,cat,contB,contN,contC;
    float preco,custo,imp,preco_f,media_custo,media_imp,media_va,maior_preco,menor_preco,total_imp;
    media_custo=0;
    media_imp=0;
    media_va=0;
    total_imp=0;
    contB=0;
    contN=0;
    contC=0;
    for(i=1;i<=n;i++){
        printf("--------------------------------------------------\n");
        printf("Produto %d\n",i);
        printf("Digite o preco do produto:\n");
        scanf("%f",&preco);
        printf("O produto precisa de refrigeracao?(1-S/2-N)\n");
        scanf("%d",&refri);
        printf("Qual a categoria do produto?(1-A/2-L/3-V)\n");
        scanf("%d",&cat);
        if(preco<=20){
            if(cat==1){
                custo=2.0;
            }
            else if(cat==2){
                custo=3.0;
            }
            else{
                custo=4.0;
            }
        }
        else if(preco>20 && preco<=50){
            if(refri==1){
                custo=6.0;
            }
            else{
                custo=0.0;
            }
        }
        else{
            if(refri==1 && cat==1){
                custo=5.0;
            }
            else if(refri==1 && cat==2){
                custo=2.0;
            }
            else if(refri==1 && cat==3){
                custo=4.0;
            }
            else if(refri==2 && cat==1 || cat==3){
                custo=0.0;
            }
            else{
                custo=1.0;
            }
        }
        if(cat==1 || refri==1){
            imp=preco*0.04;
        }
        else{
            imp=preco*0.02;
        }
        total_imp=total_imp+imp;
        media_custo=media_custo+custo;
        media_imp=media_imp+imp;
        preco_f=preco+custo+imp;
        printf("Custo de estocagem = %.2f\n",custo);
        printf("Imposto = %.2f\n",imp);
        printf("Preco final = %.2f\n",preco_f);
        if(preco_f<=20.0){
            printf("Classificacao: Barato\n");
            contB++;
        }
        else if(preco_f>20 && preco_f<=100){
            printf("Classificacao: Normal\n");
            contN++;
        }
        else{
            printf("Classificacao: Caro\n");
            contC++;
        }
        if(i==1){
            maior_preco=preco_f;
            menor_preco=preco_f;
        }
        else{
            if(preco_f>maior_preco){
            maior_preco=preco_f;
            }
            else if(preco_f<menor_preco){
                menor_preco=preco_f;
            }
        }
    }
    printf("--------------------------------------------------\n");
    media_custo=media_custo/n;
    media_imp=media_imp/n;
    media_va=(media_custo+media_imp)/2;
    printf("Media dos valores adicionais: Custo = %.2f -- Imposto = %.2f -- VA = %.2f\n",media_custo,media_imp,media_va);
    printf("Maior preco final: %.2f\n",maior_preco);
    printf("Menor preco final: %.2f\n",menor_preco);
    printf("Total dos impostos = %.2f\n",total_imp);
    printf("Quantidade de produtos com classificacao Barato: %d\n",contB);
    printf("Quantidade de produtos com classificacao Normal: %d\n",contN);
    printf("Quantidade de produtos com classificacao Caro: %d\n",contC);
    return 0;
}

