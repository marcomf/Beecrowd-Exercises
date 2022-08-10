//Uma Jornada Inesperada
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int A, B;
    float Total;
    
    cout << fixed << setprecision(2);
    cin >> A >> B;
    Total = (float)B/(A+2);
    cout << Total << endl;
}