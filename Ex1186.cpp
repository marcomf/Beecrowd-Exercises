//Abaixo da Diagonal Secundária
#include<iostream>

using namespace std;

int main()
{
    int i, j;
    char opcao; //S or M
    double matriz[12][12], Total=0;

    //leitura
    cin >> opcao;
    for (i=0; 12>i; i++)
    {
        for (j=0; 12>j; j++)
            scanf("%lf",&matriz[i][j]);
    }
    //processamento
    for (i=11; i!=0; i--)
    {
        for (j=11; j>=11-(i-1); j--)
        {
            Total = Total + matriz[i][j];
        }
    }
    
    if  (opcao=='S')
        printf("%.1lf\n",Total);
    else
        printf("%.1lf\n",Total/66);

    return 0;
}