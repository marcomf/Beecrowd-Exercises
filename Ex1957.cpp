//Converter para Hexadecimal
#include<iostream>

using namespace std;

int main(){
    
    int A, Resto, i;
    string H="0123456789ABCDEF", B;
    
    cin >> A;
    while  (A!=0)
    {
        Resto = A%16;
        A = A/16;
        B = B+H[Resto];
    }
    for  (i=B.size()-1;i>=0;i--)
    {
        cout << B[i];
    }
    cout << endl;
}