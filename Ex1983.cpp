//O Escolhido
#include<iostream>

using namespace std;

int main(){

    int Q, matricula, matricula1;
    double nota, nota1;

    cin >> Q;
    for (int A = 0; A<Q ; A++)
    {
        cin >> matricula >> nota;
        if  (nota > nota1)
        {
            nota1 = nota;
            matricula1 = matricula;
        }	
    }
    if  (nota1<8)
        cout << "Minimum note not reached" << endl;
    else
        cout << matricula1 << endl;
}