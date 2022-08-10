//Botas Perdidas
#include<iostream>

using namespace std;

int main()
{
    int N, i, j, resultado, flag;
    
    while  (cin >> N)
    {
        char pe[N];
        int tamanho[N];

        resultado=0;
        for  (i=0; N>i; i++) //lê todos os tamanhos e pés
        {
            cin >> tamanho[i] >> pe[i]; //leitura ta certa
        }
        
        for  (i=0; N>i; i++) //compara tamanho/pe
        {
            for  (j=0; N>j; j++)
            {
                if  (tamanho[i]==tamanho[j] && tamanho[i]!=0 && pe[i]!=pe[j])
                {				
                    tamanho[j]=0;
                    tamanho[i]=0;
                    resultado=resultado+1;
                }
            }
        }
        cout << resultado << endl;
    }
}