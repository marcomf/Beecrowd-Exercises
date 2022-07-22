//Paridade
#include<iostream>

using namespace std;

int main()
{
    string valor;
    int A, a=0, i;
    
    cin >> valor;
    A = valor.size();
    for  (i=0; A>i; i++)
    {
        if  (valor[i]=='1')
            a++;
    }
    if  (a%2==0)
        cout << valor << '0' << endl;
    else
        cout << valor << '1' << endl;
}