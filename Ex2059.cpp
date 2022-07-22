//Ímpar, Par ou Roubo
#include<iostream>

using namespace std;

int main()
{
    int escolha, num1, num2, roubou, acha, resultado, total;
    
    cin >> escolha >> num1 >> num2 >> roubou >> acha;
    total = num1+num2;
    resultado = (escolha==1 && total%2==0)  ? resultado=1:
                (escolha==0 && total%2!=0)  ? resultado=1:
                (roubou==1  && acha==0)     ? resultado=1:
                (roubou==1  && acha==1)     ? resultado=0:
                (roubou==0  && acha==1)     ? resultado=1:
                resultado=0;
    
    if  (resultado==1)
        cout << "Jogador 1 ganha!" << endl;
    else
        cout << "Jogador 2 ganha!" << endl;
}