//Natal de Pedrinho
#include<iostream>

using namespace std;

int main()
{
    int mes, dia, total;
    
    while (cin >> mes >> dia)
    {
        total = (mes==1)  ? 360-dia:
                (mes==2)  ? 329-dia:
                (mes==3)  ? 300-dia:
                (mes==4)  ? 269-dia:
                (mes==5)  ? 239-dia:
                (mes==6)  ? 208-dia:
                (mes==7)  ? 178-dia:
                (mes==8)  ? 147-dia:
                (mes==9)  ? 116-dia:
                (mes==10) ? 86-dia :
                (mes==11) ? 55-dia :
                25-dia;
                
        if  (total==0)
            cout << "E natal!" << endl;
        else
        {
            if  (total<0)
                cout << "Ja passou!" << endl;
            else
            {
                if  (total==1)
                    cout << "E vespera de natal!" << endl;
                else
                    cout << "Faltam " << total << " dias para o natal!" << endl;   
            }
        }
    }
}