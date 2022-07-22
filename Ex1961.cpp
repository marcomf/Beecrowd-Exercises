//Pula Sapo
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int pulo , N, CanoA=0, Cano, Morreu=0;

    cin >> pulo >> N;
    for (int i=0; N>i; i++)
    {
        cin >> Cano;
        if  (i==0)
            CanoA = Cano;

        if  (Cano > CanoA && i!=0)
        {
            if  (Cano-pulo > CanoA )
                Morreu = 1;
            else
                CanoA = Cano;
        }
        else
        {
            if  (Cano+pulo >= CanoA)
                CanoA = Cano;
            else
                Morreu = 1;
        }
    }
    if  (Morreu==0)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;
}	