//Triãngulo
#include<stdio.h>

int main()
{
    double A, B, C, perimetro, area;
    scanf("%lf%lf%lf",&A,&B,&C);

    if  (A < B + C && A > B - C)
    {
        perimetro = A+B+C;
        printf("Perimetro = %.1lf\n",perimetro);
    }
    else
    {
        area = ((A+B)*C)/2;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}