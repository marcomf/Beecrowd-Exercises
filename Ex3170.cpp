//Bolinhas de Natal
#include<iostream>

using namespace std;

int main()
{	
    int A, B, Total;
    
    cin >> A >> B;
    Total = B/2-A;
    if  (B/2>A)
        cout << "Faltam " << Total << " bolinha(s)" << endl;
    else
        cout << "Amelia tem todas bolinhas!" << endl;
}