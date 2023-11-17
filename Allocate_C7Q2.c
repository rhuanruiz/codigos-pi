#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float **notas,menor;
    int n,i,j,mj,cont1,cont2,cont3;
    printf("Numero de alunos: ");
    scanf("%d",&n);
    notas = (float**)malloc(n*sizeof(float*));
    for(j=0;j<n;j++){
        notas[i] = (float*)malloc(3*sizeof(float));
    }
    for(i=0;i<n;i++){
        printf("-----------------------------\n");
        printf("----------Aluno %d------------\n",i+1);
        for(j=0;j<3;j++){
            printf("Prova %d\n",j+1);
            scanf("%f",&notas[i][j]);
        }
    }
    cont1=0;
    cont2=0;
    cont3=0;
    for(i=0;i<n;i++){
        printf("-----------------------------\n");
        printf("----------Aluno %d------------\n",i+1);
        menor=notas[i][0];
        mj=0;
        for(j=0;j<3;j++){
            if(notas[i][j]<menor){
                menor=notas[i][j];
                mj=j;
            }
        }
        printf("Menor nota: Prova %d = %.1f\n",mj+1,menor);
        if(mj==0){
            cont1++;
        }
        else if(mj==1){
            cont2++;
        }
        else{
            cont3++;
        }
    }
    printf("---------------Notas baixas por prova--------------\n");
    printf("Prova 1: %d -- Prova 2: %d -- Prova 3: %d",cont1,cont2,cont3);
    for(i=0;i<n;i++){
        free(notas[i]);
    }
    free(notas);
    return 0;
}

