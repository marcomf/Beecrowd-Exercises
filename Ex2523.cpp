//A Mensagem de Will
#include<iostream>

using namespace std;

int main()
{
    string enigma;
    int nlampadas, lamp;

    while (cin >> enigma)
    {
        cin >> nlampadas;
        for (int i=0; nlampadas>i; i++)
        {
            cin >> lamp;
            cout << enigma[lamp-1];
        }
        cout << endl;
    } 
}