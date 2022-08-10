//Sequência de Threebonacci
#include<iostream>

using namespace std;

int main()
{
    int N;
    
    while (cin >> N)
    {
        long long int a1=0,a2=1,soma=0,i=0,valor,j=0;
        while (i!=N)
        {
            soma = a1+a2;
            a2 = a1;
            a1 = soma;
            if  (soma%3==0)
            {
                j++;
            }
            else
            {
                valor = soma;
                while (valor!=0)
                {
                    if  (valor%10==3)
                    {
                        j++;
                        valor = 0;
                    }
                    valor = valor/10;
                }
            }
            if  (j==1)
                i++;
            j = 0;
        }
        cout << soma << endl;
    }
}
