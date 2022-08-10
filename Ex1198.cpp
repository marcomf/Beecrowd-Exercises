//O Bravo Guerreiro de Hashmat
#include<iostream>

using namespace std;

int main()
{
    unsigned long long int A, B, aux;
    
    while (cin >> A >> B)
    {
        if  (B>A)
        {
            aux = B;
            B = A;
            A = aux;
        }
        cout << A-B << endl;
    }
}