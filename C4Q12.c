#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i;
    float sal,perc,aum,novo_sal;
    printf("Digite o codigo do cargo do funcionario:\n");
    scanf("%d",&i);
    printf("Digite o salario do funcionario:\n");
    scanf("%f",&sal);
    if(i==1){
        aum=sal*0.5;
        novo_sal=sal+aum;
        printf("1 -- Escrituario -- Aumento = %.1f -- Novo salario = %.1f",aum,novo_sal);
    }
    else if(i==2){
        aum=sal*0.35;
        novo_sal=sal+aum;
        printf("2 -- Secretario -- Aumento = %.1f -- Novo salario = %.1f",aum,novo_sal);
    }
    else if(i==3){
        aum=sal*0.2;
        novo_sal=sal+aum;
        printf("3 -- Caixa -- Aumento = %.1f -- Novo salario = %.1f",aum,novo_sal);
    }
    else if(i==4){
        aum=sal*0.1;
        novo_sal=sal+aum;
        printf("4 -- Gerente -- Aumento = %.1f -- Novo salario = %.1f",aum,novo_sal);
    }
    else if(i==5){
        printf("5 -- Diretor -- Nao tem aumento");
    }
    else{
        printf("%d -- Este codigo nao corresponde a nenhum cargo.",i);
    }
    return 0;
}

