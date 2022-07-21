//Coluna na Matriz
#include<iostream>

using namespace std;

int main()
{
    int coluna, i, j;
    char opcao; //S or M
    double matriz[12][12], Total=0;

    //leitura
    scanf("%d",&coluna);
    cin >> opcao;
    for (i=0; 12>i; i++)
    {
        for (j=0; 12>j; j++)
            scanf("%lf",&matriz[i][j]);
    }
    //processamento
    for (i=0; 12>i; i++)
        Total = Total + matriz[i][coluna];
    if  (opcao=='S')
        printf("%.1lf\n",Total);
    else
        printf("%.1lf\n",Total/12);

    return 0;
}