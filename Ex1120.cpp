//Revisão de Contrato
#include<iostream>

using namespace std;

int main()
{
    int tamanho, flag=0, i, n=0;
    string frase;
    char A;

    cin >> A >> frase;
    while (A != '0' || frase != "0")
    {
        tamanho = frase.length();
        for (i=0; tamanho>i; i++)
        {
            
            if  (frase[i]!='0' && flag==0)
                flag = 1;
            if  (frase[i]==A)
                flag = 0;
            if  (flag==1 && frase[i]!=A)
                cout << frase[i];
        }
        //caso específico se o A for igual a toda a string
        for (i=0; tamanho>i; i++)
        {
            if  (frase[i]==A)
                n++;
        }
        if  (tamanho==n)
            cout << 0;
        else
        {
            if  (frase[tamanho-1]==A){}
            else
            {
                if  (flag==0)
                    cout << 0;
            }   
        }
        n = 0;
        cout << endl;
        cin >> A >> frase;
    }
}