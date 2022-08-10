//Birinho
#include<iostream>

using namespace std;

int main()
{	
    int A, B, C, D;
    float PorcentagemA, PorcentagemB;

    cin >> A >> B >> C >> D;
    PorcentagemA = (A*C)/100;
    PorcentagemB = (A*D)/100;
    if  (B<PorcentagemA)
        cout << "OK" << endl;
    else
    {
        if  (B<PorcentagemB)
            cout << "warning" << endl;
        else
            cout << "critical" << endl;
    }
}