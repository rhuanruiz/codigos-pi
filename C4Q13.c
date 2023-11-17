#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i;
    float sal,perc,imp,novo_sal;
    printf("Menu de opcoes:\n1. Imposto\n2. Novo salario\n3. Classificacao\nDigite a opcao desejada.\n");
    scanf("%d",&i);
    printf("Digite o salario do funcionario:\n");
    scanf("%f",&sal);
    if(i==1){
        if(sal<500){
            imp=sal*0.05;
            printf("O valor do imposto eh: %.1f",imp);
        }
        else if(sal>=500 && sal<=850){
            imp=sal*0.1;
            printf("O valor do imposto eh: %.1f",imp);
        }
        else{
            imp=sal*0.15;
            printf("O valor do imposto eh: %.1f",imp);
        }
    }
    else if(i==2){
        if(sal<450){
            novo_sal=sal+100;
            printf("O valor do novo salario eh: %.1f",novo_sal);
        }
        else if(sal>=450 && sal<750){
            novo_sal=sal+75;
            printf("O valor do novo salario eh: %.1f",novo_sal);
        }
        else if(sal>=750 && sal<=1500){
            novo_sal=sal+50;
            printf("O valor do novo salario eh: %.1f",novo_sal);
        }
        else{
            novo_sal=sal+25;
            printf("O valor do novo salario eh: %.1f",novo_sal);
        }
    }
    else if(i==3){
        if(sal<=700){
            printf("Mal remunerado");
        }
        else{
            printf("Bem remunerado");
        }
    }
    else{
        printf("Opcao invalida.");
    }
    return 0;
}

