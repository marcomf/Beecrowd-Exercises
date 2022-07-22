//Nome no Formulário
#include<iostream>

using namespace std;

int main()
{
    string A;
    int B;

    getline(cin,A);
    B = A.size();
    if  (B>80)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}