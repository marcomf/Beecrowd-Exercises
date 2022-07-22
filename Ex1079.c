//Médias Ponderadas
#include<stdio.h>

int main()
{
    int N, i;
    float A, B, C, media;
    
    scanf("%d",&N);
    for  (i=0; N>i; i++)
    {
        scanf("%f%f%f",&A,&B,&C);
        media = (A*2 + B*3 + C*5)/10;
        printf("%.1f\n",media);
    }
    return 0;
}