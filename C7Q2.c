#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int main(void)
{
    float M[10][3],menor;
    int i,j,jm,prova1,prova2,prova3;
    for(i=0;i<10;i++){
        printf("----------------------------\nAluno %d\n----------------------------\n",i+1);
        for(j=0;j<3;j++){
            printf("Prova %d: ",j+1);
            scanf("%f",&M[i][j]);
        }
    }
    prova1=0;
    prova2=0;
    prova3=0;
    for(i=0;i<10;i++){
        menor=M[i][0];
        jm=0;
        for(j=0;j<3;j++){
            if(M[i][j]<menor){
                menor=M[i][j];
                jm=j;
            }
        }
        printf("|Aluno %d| Menor nota: Prova %d = %.1f\n",i+1,jm+1,menor);
        if(jm==0){
            prova1++;
        }
        if(jm==1){
            prova2++;
        }
        if(jm==2){
            prova3++;
        }
    }
    printf("Prova 1: Menor nota de %d alunos.\n",prova1);
    printf("Prova 2: Menor nota de %d alunos.\n",prova2);
    printf("Prova 3: Menor nota de %d alunos.\n",prova3);
    return 0;
}

