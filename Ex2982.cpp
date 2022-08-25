//A Greve para ou Continua?
#include<iostream>

using namespace std;

int main()
{
    int passagens, valor, verba=0, gasto=0;
    char situacao;

    cin >> passagens;
    for  (int i=0; passagens>i; i++)
    {
        cin >> situacao >> valor;
        if  (situacao == 'V')
            verba += valor;
        else
            gasto += valor;
    }
    if  (gasto > verba)
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    else
        cout << "A greve vai parar." << endl; 
}