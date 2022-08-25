//Matriz Quadrada I
#include<iostream>

using namespace std;

int main()
{
    int tamanho, inicio, final, num, i, j;

    while (true)
    {
        cin >> tamanho;
        int matriz[tamanho][tamanho];

        if  (tamanho==0)
            break;

        inicio = 0;
        final = tamanho;
        num = 1;
        
        while (true)
        {
            for (i=inicio; final>i; i++)
            {
                for (j=inicio; final>j; j++)
                    matriz[i][j] = num;
            }
            if  (final==0)
                break;

            num++;
            inicio++;
            final--;
        }
        
        for (i=0; tamanho>i; i++)
        {
            for (j=0; tamanho>j; j++)
            {
                if  (j == 0)
                    printf("%3hd", matriz[i][j]);
                else
                    printf(" %3hd", matriz[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }
}