//Impeachment do Líder
#include<iostream>

using namespace std;

int main()
{
    int voto, s;
    double Casos;
    
    while (cin >> Casos)
    {
        for(int i=0; Casos>i; i++)
        {
            cin >> voto;
            if  (voto==1)
                s++;
        }
        Casos = (Casos*66)/100;
        if  (s>Casos)
            cout << "impeachment" << endl;
        else
            cout << "acusacao arquivada" << endl;
        s=0;
    }	
}