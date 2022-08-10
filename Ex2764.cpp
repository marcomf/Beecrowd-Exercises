//Entrada e Saída de Data
#include<iostream>

using namespace std;

int main()
{	
    char k='/';
    int dia, mes, ano;
    
    while  (cin >> dia >> k >> mes >> k >> ano)
    {
        if  (dia < 10 && mes > 9 && ano > 9)
        {
            cout << mes << k << '0' << dia << k << ano << endl;
            cout << ano << k << mes << k << '0' << dia << endl;
            cout << '0' << dia << '-' << mes << '-' << ano << endl;
        }
        else
        {
            if  (mes < 10 && dia > 9 && ano > 9)
            {
                cout << '0' << mes << k << dia << k << ano << endl;
                cout << ano << k << '0' << mes << k << dia << endl;
                cout << dia << '-' << '0' << mes << '-' << ano << endl;
            }
            else
            {
                if  (ano < 10 && dia > 9 && mes > 9)
                {
                    cout << mes << k << dia << k << '0' << ano << endl;
                    cout << '0' << ano << k << mes << k << dia << endl;
                    cout << dia << '-' << mes << '-' << '0' << ano << endl;
                }
                else
                {
                    if  (dia < 10 && mes < 10 && ano > 9)
                    {
                        cout << '0' << mes << k << '0' << dia << k << ano << endl;
                        cout << ano << k << '0' << mes << k << '0' << dia << endl;
                        cout << '0' << dia << '-' << '0' << mes << '-' << ano << endl;
                    }
                    else 
                    {
                        if  (dia < 10 && ano < 10 && mes > 9)
                        {
                        cout << mes << k << '0' << dia << k << '0' << ano << endl;
                        cout << '0' << ano << k << mes << k << '0' << dia << endl;
                        cout << '0' << dia << '-' << mes << '-' << '0' << ano << endl;
                        }
                        else
                        {
                            if  (mes < 10 && ano < 10 && dia > 9)
                            {
                                cout << '0' << mes << k << dia << k << '0' << ano << endl;
                                cout << '0' << ano << k << '0' << mes << k << dia << endl;
                                cout << dia << '-' << '0' << mes << '-' << '0' << ano << endl;
                            }
                            else
                            {
                                cout << mes << k << dia << k << ano << endl;
                                cout << ano << k << mes << k << dia << endl;
                                cout << dia << '-' << mes << '-' << ano << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}