//De Quem é a Vez?
#include<iostream>

using namespace std;

int main()
{
    int testes, n1, n2;
    string nome1, nome2, escolha1, escolha2;

    cin >> testes;
    for (int i=0; testes>i; i++)
    {
        cin >> nome1 >>  escolha1 >> nome2 >> escolha2;
        cin >> n1 >> n2;
        if  (escolha1 == "PAR" && (n1+n2)%2==0)
            cout << nome1 << endl;
        else
        {
            if  (escolha1 == "IMPAR" && (n1+n2)%2!=0)
                cout << nome1 << endl;
            else
                cout << nome2 << endl;
        }
    }
}