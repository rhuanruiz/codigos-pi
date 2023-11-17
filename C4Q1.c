#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2,n3,media;
    printf("Digite a nota do trabalho de lab, da avaliacao semestral e do exame final, respectivamente:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1*2+ n2*3 + n3*5)/10.0;
    printf("Media ponderada = %.1f\n",media);
    if (media<=10.0 && media>=8.0){
        printf("Conceito A");
    }
    else if (media<8.0 && media>=7.0){
        printf("Conceito B");
    }
    else if (media<7.0 && media>=6.0){
        printf("Conceito C");
    }
    else if (media<6.0 && media>=5.0){
        printf("Conceito D");
    }
    else{
        printf("Conceito E");
    }
    return 0;
}
