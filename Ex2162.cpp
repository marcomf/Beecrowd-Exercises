//Picos e Vales
#include<iostream>

using namespace std;

int main()
{	
    int N, i, A;
    cin >> N;
    int vetor[N];
    
    for (i=0; N>i; i++)
        cin >> vetor[i];
    i=0;
    if  (N==2)
    {
        if  (vetor[i]==vetor[i+1])
            A=0;
        else
            A=1;
    }
    else
    {
        for (i=0; N-2>i;i++)
        {	
            if  (vetor[i]>vetor[i+1] && vetor[i+1]<vetor[i+2])
                A=1;
            else
            {
                if  (vetor[i]<vetor[i+1] && vetor[i+1]>vetor[i+2])
                    A=1;
                else
                    A=0;
            }
        }
    }
    cout << A << endl;
}