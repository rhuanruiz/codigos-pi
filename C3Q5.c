#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float sal,novosal,perc,aum;
    printf("Digite o atual salario do funcionario: \n");
    scanf("%f",&sal);
    printf("Digite o percentual de aumento: \n");
    scanf("%f",&perc);
    aum=sal*(perc/100);
    novosal=sal+aum;
    printf("O aumento eh de %.2f e o novo salario eh de %.2f",aum,novosal);
    return 0;
}
