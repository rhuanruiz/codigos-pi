#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

int numero(int n);

int main(void)
{
    int x;
    scanf("%d",&x);
    printf("%d\n",numero(x));
    return 0;
}
int numero(int n)
{
    if(n>=0){
        return 1;
    }
    else{
        return 0;
    }
}
