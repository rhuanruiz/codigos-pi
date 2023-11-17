#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#define n

float Media(float x,float y,float z,char c);

int main(void)
{
    float n1,n2,n3;
    char m;
    scanf("%f %f %f",&n1,&n2,&n3);
    scanf(" %c",&m);
    printf("%.1f",Media(n1,n2,n3,m));
    return 0;
}
float Media(float x,float y,float z,char c)
{
    float med;
    if(c=='A'){
        med=(x+y+z)/3.0;
    }
    if(c=='P'){
        med=(x*5+y*3+z*2)/10.0;
    }
    return med;
}





