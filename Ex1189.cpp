//Área Esquerda
#include<iostream>

using namespace std;

int main()
{
    int i, j, J, A;
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
    A=1, J=11;
    for (j=0; 5>j; j++)
    {
        for (i=A; J>i; i++)
        {
            Total = Total + matriz[i][j];
        }
        A++, J--;
    }
    
    if  (opcao=='S')
        printf("%.1lf\n",Total);
    else
        printf("%.1lf\n",Total/30);

    return 0;
}