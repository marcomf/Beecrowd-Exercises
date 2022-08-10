//Lista de Treinamento
#include<iostream>

using namespace std;

int main()
{
    int N, contador=0, A, i;

    cin >> N;
    for (i=0; N>i; i++)
    {
        cin >> A;
        if  (A==1)
            contador=contador+1;
    }
    cout << contador << endl;
}