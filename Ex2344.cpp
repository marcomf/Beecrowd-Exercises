//Notas da Prova
#include<iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;
    if  (N == 0)
        cout << "E" << endl;
    else
    {
        if  (N>0 && N<=35)
            cout << "D" << endl;
        else
        {
            if  (N>35 && N<=60)
                cout << "C" << endl;
            else
            {
                if  (N>60 && N<=85)
                    cout << "B" << endl;
                else
                    cout << "A" << endl;
            }
        }
    } 		
}