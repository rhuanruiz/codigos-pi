#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

void tempo(int x);

int main(void)
{
    int s,t;
    printf("Digite os segundos:\n");
    scanf("%d",&s);
    tempo(s);
    return 0;
}
void tempo(int x)
{
    int horas,minutos,segundos;
    horas=x/3600;
    minutos=(x-3600*horas)/60;
    segundos=x-3600*horas-60*minutos;
    printf("%d:%d:%d\n",horas,minutos,segundos);
}



