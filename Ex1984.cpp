//O Enigma do Pronalândia
#include<iostream>

using namespace std;

int main()
{
    int i;
    string A;
    
    cin >> A;
    i = A.size()-1;
    for  (; i>=0; i--)
        cout << A[i];
    cout << endl;
}