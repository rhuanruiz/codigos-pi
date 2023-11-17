#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n=6,i,j,contA,contE,contR;
    float nota1,nota2,media,media_t;
    contA=0;
    contE=0;
    contR=0;
    media_t=0;
    for(i=1;i<=n;i++){
        printf("Digite as duas notas do aluno:\n");
        scanf("%f %f",&nota1,&nota2);
        media=(nota1+nota2)/2;
        printf("Media do aluno = %.1f\n",media);
        if(media<=3){
            printf("Reprovado\n");
            contR++;
        }
        else if(media>7){
            printf("Aprovado\n");
            contA++;
        }
        else{
            printf("Exame\n");
            contE++;
        }
        printf("-----------------------------------\n");
        media_t=media_t+media;
    }
    media_t=media_t/6.0;
    printf("Numero de reprovados: %d\nNumero de aprovados: %d\nNumero de exames: %d\n",contR,contA,contE);
    printf("Media da classe = %.1f",media_t);
    return 0;
}

