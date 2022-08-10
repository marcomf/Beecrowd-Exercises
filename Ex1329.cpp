//Cara ou Coroa
#include<iostream>

using namespace std;

int main()
{
    int mary, jhon, i, N, A;

    cin >> N;
    while (N!=0)
    {
        mary=0;
        jhon=0;
        for (i=0; N>i; i++)
        {
            cin >> A;
            if  (A==0)
                mary++;
            else
                jhon++;
        }
        cout << "Mary won " << mary << " times and John won " << jhon << " times" << endl;
        cin >> N;
    }
}