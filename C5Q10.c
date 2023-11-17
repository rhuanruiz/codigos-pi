#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n1=5,n2=11,i,j,idade,peso,altura,contI,contP;
    float mediaI,mediaA,porc;
    contI=0;
    contP=0;
    for(i=1;i<=n1;i++){
        printf("Time %d\n",i);
        printf("--------------------------------------\n");
        mediaI=0;
        for(j=1;j<=n2;j++){
            printf("Digite a idade do jogador:\n");
            scanf("%d",&idade);
            printf("Digite o peso do jogador:\n");
            scanf("%d",&peso);
            printf("Digite a altura do jogador:\n");
            scanf("%d",&altura);
            mediaA=mediaA+altura;
            mediaI=mediaI+idade;
            if(idade<18){
                contI++;
            }
            if(peso>80){
                contP++;
            }
            printf("--------------------------------------\n");
        }
        mediaI=mediaI/n2;
        printf("Media de idade dos jogadores do time = %.2f\n",mediaI);
    }
    mediaA=mediaA/(n1*n2);
    porc=contP*100/(n1*n2);
    printf("Media de altura de todos os jogadores do camp = %.2f\n",mediaA);
    printf("Ha %d jogadores menores de idade.\n",contI);
    printf("%.2f porc dos jogadores tem mais de 80kg.\n",porc);
    return 0;
}

