//Indecisão das Renas
#include<iostream>

using namespace std;

int main()
{	
    int B=0, Total, Resto;
    
    for  (int i=0; i<9; i++)
    {
        cin >> B;
        Total = Total+B;
    }
    Resto = Total%9;
    switch (Resto)
    {
        case 1:
            cout << "Dasher" << endl;
            break;
        case 2:
            cout << "Dancer" << endl;
            break;
        case 3:
            cout << "Prancer" << endl;
            break;
        case 4:
            cout << "Vixen" << endl;
            break;
        case 5: 
            cout << "Comet" << endl;
            break;
        case 6:
            cout << "Cupid" << endl;
            break;
        case 7:
            cout << "Donner" << endl;
            break;
        case 8:
            cout << "Blitzen" << endl;
            break;
        default:
            cout << "Rudolph" << endl;
            break;
    }
}