//Matriz 123
#include<iostream>

using namespace std;

int main()
{
    int tmat;

    while (cin >> tmat)
    {
        //tamanho da matriz
        int matriz[tmat];

        //construção da matriz
        for (int i=0; tmat>i; i++)
        {
            for (int j=0; tmat>j; j++)
            {
                if (i+j==tmat-1)
                    printf("2");
                else
                {
                    if (i==j)
                        printf("1");
                    else
                        printf("3");
                }
            }
            printf("\n");
        }
    }
}