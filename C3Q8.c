#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float valor,juros,total;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do depósito:\n");
    scanf("%f",&valor);
    printf("Digite o valor da taxa de juros:\n");
    scanf("%f",&juros);
    total=valor+valor*(juros/100);
    printf("O total é = %f",total);
    return 0;
}
