//Batalha de Pomekons
#include<iostream>

using namespace std;

float CalculoB(float a, float b, float c)
{
    return (a+b)/2+c;
}

float Calculo(float a, float b)
{
    return (a+b)/2;
}

int main()
{
    int N, ataque1, ataque2, defesa1, defesa2, level1, level2, i, bonus;
    float total2, total1;
    
    cin >> N;
    for (i=0; N>i; i++)
    {
        //entrada de valores
        cin >> bonus;
        cin >> ataque1 >> defesa1 >> level1
            >> ataque2 >> defesa2 >> level2;

        //calculo do primeiro treinador
        if  (level1%2==0)
            total1 = CalculoB(ataque1,defesa1,bonus);
        else
            total1 = Calculo(ataque1,defesa1);

        //calclulo do segundo treinador
        if  (level2%2==0)
            total2 = CalculoB(ataque2,defesa2,bonus);
        else
            total2 = Calculo(ataque2,defesa2);
        
        //conclusao de quem ganhou
        if  (total1>total2)
            cout << "Dabriel" << endl;
        else
        {
            if  (total2>total1)
                cout << "Guarte" << endl;
            else
                cout << "Empate" << endl;
        }
    }
}