//Máquina de Café
#include<iostream>

using namespace std;

int main()
{	
    int a, b, c, m1, m2, m3;
    
    cin >> a >> b >> c;
    m1 = b*2 + c*4;
    m2 = a*2 + c*2;
    m3 = a*4 + b*2;
    if  (m1 <= m2 && m1 <= m3)
        cout << m1 << endl;
    else
    {
        if  (m2 <= m1 && m2 <= m3)
            cout << m2 << endl;
        else
            cout << m3 << endl;
    }
}