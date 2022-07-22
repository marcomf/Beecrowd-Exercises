//Há Muito, Muito Tempo Atrás
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int Casos, ano;
    
    cin >> Casos;
    for (int i=0; Casos>i; i++)
    {
        cin >> ano;
        if  (ano>=2015)
        {
            ano = ano-2014;
            cout << ano << " A.C." << endl;
        }
        else
        {
            ano = 2015-ano;
            cout << ano << " D.C." << endl;
        }
    }
}