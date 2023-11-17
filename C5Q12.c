#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n=15,i,num,pfm,total_PFM,sexo,p_h,p_m,cont_h,cont_m,num_sal;
    float sal_min=900.0,sal,total_P,media_h,media_m,maior_sal;
    total_P=0;
    total_PFM=0;
    p_h=0;
    p_m=0;
    maior_sal=0;
    cont_h=0;
    cont_m=0;
    for(i=1;i<=n;i++){
        printf("-------------------------------------------------------------\n");
        printf("Operario %d\n",i);
        printf("Digite o numero do operario:\n");
        scanf("%d",&num);
        printf("Digite o numero de pfm:\n");
        scanf("%d",&pfm);
        printf("Digite o sexo do operario (1-M/2-F):\n");
        scanf("%d",&sexo);
        printf("\n");
        if(pfm<=30){
            sal=sal_min;
            printf("Operario %d -- Classe 1 -- Salario = %.2f\n",i,sal);
        }
        else if(pfm>30 && pfm<=50){
            sal=sal_min+(pfm-30)*sal_min*0.03;
            printf("Operario %d -- Classe 2 -- Salario = %.2f\n",i,sal);
        }
        else{
            sal=sal_min+(pfm-30)*sal_min*0.05;
            printf("Operario %d -- Classe 3 -- Salario = %.2f\n",i,sal);
        }
        if(sexo==1){
            p_h=p_h+pfm;
            cont_h++;
        }
        if(sexo==2){
            p_m=p_m+pfm;
            cont_m++;
        }
        if(sal>maior_sal){
            maior_sal=sal;
            num_sal=num;
        }
        total_P=total_P+sal;
        total_PFM=total_PFM+pfm;
    }
    media_h=p_h/cont_h;
    media_m=p_m/cont_m;
    printf("Total da folha de pagamento da fabrica: %.2f\n",total_P);
    printf("Total de PFM: %d\n",total_PFM);
    printf("Media PFM pelos homens: %.1f -- Media PFM pelas mulheres: %.1f\n",media_h,media_m);
    printf("Maior salario: Operario %d -- Salario = %.2f\n",num_sal,maior_sal);
    return 0;
}

