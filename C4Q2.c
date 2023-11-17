#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2,n3,media,exame;
    printf("Digite as tres notas do aluno:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    printf("Media aritmetica = %.1f\n",media);
    if(media>=0.0 && media<3.0){
        printf("Reprovado");
    }
    else if(media>=3.0 && media<7.0){
        printf("Exame\n");
        if(media>=3.0 && media<6.0){
            exame=12.0-media;
            printf("Tera que tirar %.1f para ser aprovado\n",exame);
        }
    }
    else{
        printf("Aprovado");
    }
   return 0;
}
