//A Batalha dos Cinco Exércitos
#include<iostream>

using namespace std;

int main()
{
    int A, B, C, D, E, F,LadoBem, LadoMal;
    
    cin >> A >> B >> C >> D >> E >> F;
    LadoBem = A+B+C+F;
    LadoMal = D+E;
    if  (LadoBem >= LadoMal)
        cout << "Middle-earth is safe." << endl;
    else
        cout << "Sauron has returned." << endl;
}