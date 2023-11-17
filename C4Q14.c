#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float sal,novo_sal;
    printf("Digite o salario do funcionario:\n");
    scanf("%f",&sal);
    if(sal<=500){
        novo_sal=sal+(sal*0.05);
    }
    else if(sal>500 && sal<=1200){
        novo_sal=sal+(sal*0.12);
    }
    if(sal<=600){
        novo_sal=sal+150;
    }
    else if(sal>600){
        novo_sal=sal+100;
    }
    printf("O novo salario eh %.1f",novo_sal);
    return 0;
}

