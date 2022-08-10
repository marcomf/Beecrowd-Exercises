//Sobrinho do Meio
#include<iostream>

using namespace std;

int main()
{
    int H, Z, L;

    cin >> H >> Z >> L;
    if  (H > Z && H > L && L > Z)
    { 
        cout << "luisinho" << endl;
    }
    else
    {
        if  (H > Z && H > L && Z > L)
            cout << "zezinho" << endl;
        else
        {
            if  (Z > H && Z > L && L > H)
                cout << "luisinho" << endl;
            else
            {
                if  (Z > H && Z > L && H > L)
                    cout << "huguinho" << endl;
                else
                {
                    if  (L > H && L > Z && H > Z)
                        cout << "huguinho" << endl;
                    else
                        cout << "zezinho" << endl;
                }
            }
        }
    }
}