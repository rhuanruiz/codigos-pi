#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int n,x,i,j,fat;
    FILE *ps;
    ps = fopen("Arquivo_C5Q3.txt","w+");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        fat=1;
        for(j=1;j<=x;j++){
            fat=fat*j;
        }
        fprintf(ps,"Valor = %d // Fatorial = %d\n",i,fat);
    }
    fclose(ps);
    return 0;
}

