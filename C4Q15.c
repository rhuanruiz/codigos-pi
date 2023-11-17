#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int vm;
    float valor,valor2;
    printf("Digite o valor do produto e a venda media mensal do produto:\n");
    scanf("%f %d",&valor,&vm);
    if(valor<30 || vm<500){
        valor2=valor+(valor*0.1);
    }
    else if(valor>=30 && valor<80 || vm>=500 && vm<1200){
        valor2=valor+(valor*0.15);
    }
    else if(valor>=80 || vm>=1200){
        valor2=valor-(valor*0.2);
    }
    printf("O novo preco do produto eh %.1f",valor2);
    return 0;
}

