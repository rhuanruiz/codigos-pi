#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int sal, novosal;
    printf("Digite o atual salario do funcionario:\n");
    scanf("%d",&sal);
    novosal=(sal*0.25)+sal;
    printf("O novo salario eh: %d\n",novosal);
    return 0;
}
