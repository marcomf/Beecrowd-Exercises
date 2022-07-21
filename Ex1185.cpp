//Acima da Diagonal Secundária
#include<iostream>

using namespace std;

int main()
{
    int i, j, J;
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
    J=11;
    for (i=0; 12>i; i++)
    {
        for (j=0; J>j; j++)
        {
            Total = Total + matriz[i][j];
        }
        J--;
    }
    
    if  (opcao=='S')
        printf("%.1lf\n",Total);
    else
        printf("%.1lf\n",Total/66);

    return 0;
}