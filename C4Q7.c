#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int I;
    float A,B,C;
    printf("Digite o valor de I(1, 2 ou 3):\n");
    scanf("%d",&I);
    printf("Digite os valores de A, B e C:\n");
    scanf("%f %f %f",&A,&B,&C);
    if(I==2){
       if(A>B && A>C){
            if(B>C){
                printf("%.1f,%.1f,%.1f",A,B,C);
            }
            else{
                printf("%.1f,%.1f,%.1f",A,C,B);
            }
       }
       else if(B>A && B>C){
            if(A>C){
                printf("%.1f,%.1f,%.1f",B,A,C);
            }
            else{
                printf("%.1f,%.1f,%.1f",B,C,A);
            }
       }
       else if(C>A && C>B){
            if(A>B){
                printf("%.1f,%.1f,%.1f",C,A,B);
            }
            else{
                printf("%.1f,%.1f,%.1f",C,B,A);
            }
       }

    }
    else if(I==1){
        if(A<B && A<C){
            if(B>C){
                printf("%.1f,%.1f,%.1f",A,C,B);
            }
            else{
                printf("%.1f,%.1f,%.1f",A,B,C);
            }
       }
       else if(B<A && B<C){
            if(A>C){
                printf("%.1f,%.1f,%.1f",B,C,A);
            }
            else{
                printf("%.1f,%.1f,%.1f",B,A,C);
            }
       }
       else if(C<A && C<B){
            if(A>B){
                printf("%.1f,%.1f,%.1f",C,B,A);
            }
            else{
                printf("%.1f,%.1f,%.1f",C,A,B);
            }
       }
    }
    else if(I==3){
        if(A>B && A>C){
            printf("%.1f,%.1f,%.1f",B,A,C);
        }
        else if(B>A && B>C){
            printf("%.1f,%.1f,%.1f",A,B,C);
        }
        else{
            printf("%.1f,%.1f,%.1f",A,C,B);
        }
    }
    return 0;
}

