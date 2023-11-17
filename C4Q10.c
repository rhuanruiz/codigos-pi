#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int d1,m1,a1,d2,m2,a2;
    printf("Digite a primeira data na sequencia DIA-MES-ANO:\n");
    scanf("%d %d %d",&d1,&m1,&a1);
    printf("Digite a segunda data na sequencia DIA-MES-ANO:\n");
    scanf("%d %d %d",&d2,&m2,&a2);
    if(a2>a1){
        printf("A maior data eh: %d/%d/%d",d2,m2,a2);
    }
    else if(a1>a2){
        printf("A maior data eh: %d/%d/%d",d1,m1,a1);
    }
    else if(a1=a2){
        if (m2>m1){
            printf("A maior data eh: %d/%d/%d",d2,m2,a2);
        }
        else if(m1>m2){
            printf("A maior data eh: %d/%d/%d",d1,m1,a1);
        }
        else if(m1=m2){
            if(d2>d1){
                printf("A maior data eh: %d/%d/%d",d2,m2,a2);
            }
            else if(d1>d2){
                printf("A maior data eh: %d/%d/%d",d1,m1,a1);
            }
            else{
                printf("As datas sao iguais");
            }
        }
    }
    return 0;
}

