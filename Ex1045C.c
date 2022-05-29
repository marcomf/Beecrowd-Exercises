#include<stdio.h>

int main()
{
    double A, B, C, aux;

    scanf("%lf%lf%lf",&A,&B,&C);
    if  (B>A && B>C)
    {
        aux = B;
        B = A;
        A = aux;
    }
    else
    {
        if  (C>A && C>B)
        {
            aux = C;
            C = A;
            A = aux;
        }
    }

    if  (A>= B+C)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if  (A*A == B*B + C*C)       
            printf("TRIANGULO RETANGULO\n");
        if  (A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if  (A*A < B*B + C*C)       
            printf("TRIANGULO ACUTANGULO\n");      
        if  (A==B && A==C)        
            printf("TRIANGULO EQUILATERO\n");       
        if  ((A == B && C!=A) || (A == C && B!=A) || (C == B && A!=C))       
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}