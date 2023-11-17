#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1,n2,n3,p1,p2,p3,media;
    printf("Digite as tres notas:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("Digite os tres pesos:\n");
    scanf("%f %f %f",&p1,&p2,&p3);
    media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("A media ponderada eh: %.3f\n",media);
    return 0;
}
