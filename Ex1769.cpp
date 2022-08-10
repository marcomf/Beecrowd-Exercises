//CPF 1
#include<iostream>

using namespace std;

int main()
{
    int b1, b2;
    string cpf;
    
    while (cin >> cpf)
    {
        b1 = b2 = 0;
        for  (int i=0,j=1; i<11; i++,j++)
        {
            b1 = b1 + (cpf[i]-48)*j;
            if  (i==2 || i==6)
                i++;
        }
        b1 = b1%11;
        if  (b1==10)
            b1 = 0;
        for (int i=0,j=9; i<11; i++,j--)
        {
            b2 = b2 + (cpf[i]-48)*j;
            if  (i==2 || i==6)
                i++;
        }
        b2 = b2%11;
        if  (b2==10)
            b2 = 0;
        if  (b1==(cpf[12]-48) && b2==(cpf[13]-48))
            cout << "CPF valido" << endl;
        else
            cout << "CPF invalido" << endl;
    }
}