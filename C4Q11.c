#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int hi,mi,ht,mt,h,m;
    printf("Digite a hora e o minuto de inicio:\n");
    scanf("%d %d",&hi,&mi);
    printf("Digite a hora e o minuto de termino:\n");
    scanf("%d %d",&ht,&mt);
    if(hi==ht && mi==mt){
        printf("O jogo durou 24 horas");
    }
    else{
        if(mt<mi){
            mt=mt+60;
            ht=ht-1;
        }
        if(ht<hi){
            ht=ht+24;
        }
        h=ht-hi;
        m=mt-mi;
        printf("O jogo durou %d hora(s) e %d minuto(s)",h,m);
    }
    return 0;
}

