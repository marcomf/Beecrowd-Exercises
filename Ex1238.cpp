//combinador
#include<iostream>

using namespace std;

int main()
{
    int testes ,tamanhoint, tamanhopar, tamanhoimpar;
    string str1, str2, strinteira, stringnew;

    cin >> testes;
    for (int i=0; testes>i; i++)
    {
        cin >> str1 >> str2;
        strinteira = str1+str2;
        tamanhopar = str1.length();
        tamanhoimpar = str2.length();
        tamanhoint = tamanhopar+tamanhoimpar;
        for (int j=0,par=0,impar=0; tamanhoint>j; j++)
        {
            if  (j%2==0 && tamanhopar>par)
            {
                stringnew = stringnew + str1[par];
                par++;
            }
            else
            {
                if  (tamanhoimpar>impar)
                {
                    stringnew = stringnew + str2[impar];
                    impar++;
                }
                else
                {
                    stringnew = stringnew + str1[par];
                    par++;
                }
            }
        }
        cout << stringnew << endl;
        stringnew="";
    }
}