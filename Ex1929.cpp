//Triângulo
#include<iostream>

using namespace std;

int main()
{
    int t1,t2,t3,t4,flag=0;

    cin >> t1 >> t2 >> t3 >> t4;

    if  (t1+t2>t3 && t1+t3>t2 && t2+t3>t1) //sem o t4
    {
        cout << "S" << endl;
    }
    else
    {
        if  (t1+t2>t4 && t1+t4>t2 && t2+t4>t1) //sem o t3
        {
            cout << "S" << endl;
        }
        else
        {
            if  (t2+t3>t4 && t2+t4>t3 && t3+t4>t2) //sem o t1
            {
                cout << "S" << endl;
            }
            else
            {
                if  (t1+t3>t4 && t1+t4>t3 && t3+t4>t1) //sem o t2
                {
                    cout << "S" << endl;
                }
                else
                {
                    cout << "N" << endl;
                }
            }
        }
    }
}