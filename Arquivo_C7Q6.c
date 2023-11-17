#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float M1[4][5],M2[5][2],R[4][2];
    int i,j,k;
    FILE *pe,*ps;
    pe = fopen("Arquivo_C7Q6E","r+");
    ps = fopen("Arquivo_C7Q6S","w+");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            fscanf(pe,"%f",&M1[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            fscanf(pe,"%f",&M2[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            R[i][j]=0.0;
            for(k=0;k<5;k++){
                R[i][j]=R[i][j]+M1[i][k]*M2[k][j];
            }
            fprintf(ps,"%.1f",R[i][j]);
        }
        fprintf(ps,"\n");
    }
    fclose(pe);
    fclose(ps);
    return 0;
}

