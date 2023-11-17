#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i,n=3,cod,horas,turno,cat,sal;
    float valor,sal_i,aux,sal_f;
    sal=450;
    for(i=1;i<=n;i++){
        printf("Digite o codigo do funcionario:\n");
        scanf("%d",&cod);
        printf("Digite o numero de horas trabalhadas no mes:\n");
        scanf("%d",&horas);
        printf("Digite o turno (1-M/2-V/3-N) de trabalho do funcionario:\n");
        scanf("%d",&turno);
        printf("Digite a categoria (1-O/2-G) do funcionario:\n");
        scanf("%d",&cat);
        printf("-----------------------------------------------------------------\n");
        if(cat==2){
            if(turno==1 || turno==2){
                valor=sal*0.15;
            }
            else{
                valor=sal*0.18;
            }
        }
        else{
            if(turno==1 || turno==2){
                valor=sal*0.1;
            }
            else{
                valor=sal*0.13;
            }
        }
        sal_i=valor*horas;
        if(sal_i<=300){
            aux=sal_i*0.2;
        }
        else if(sal_i>300 && sal_i<=600){
            aux=sal_i*0.15;
        }
        else{
            aux=sal_i*0.05;
        }
        sal_f=sal_i+aux;
        printf("Codigo: %d -- Horas: %d -- Valor: %.2f -- Salario I.: %.2f -- Auxilio: %.2f -- Salario F.: %.2f\n",cod,horas,valor,sal_i,aux,sal_f);
    }
    return 0;
}

