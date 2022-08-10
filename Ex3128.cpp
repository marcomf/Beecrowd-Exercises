//Regras do Cinema
#include<iostream>

using namespace std;

int main()
{
    int ID1, ID2;

    cin >> ID1 >> ID2;
    if  (ID1>5 && ID2>5)
    {
        if  (ID1>17 || ID2>17)
            cout << "YES" << endl;
        else
        {
            if  (ID1>13 && ID2>13)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    else
        cout << "NO" << endl;
}