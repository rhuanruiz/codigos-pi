#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float sal,novo_sal;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o salário do funcionário:\n");
    scanf("%f",&sal);
    novo_sal=sal+50-(sal*0.10);
    printf("O novo salário: %.2f",novo_sal);
    return 0;
}

