//Pizza Antes de BH
#include<iostream>

using namespace std;

int main(){
    
    char k='/';
    int dia, mes, ano, Total, mes1=10000, dia1=10000, ano1=10000, NP, ND, opcao, i, parada=1;
    
    while  (cin >> NP >> ND)
    {
        for  (int l=0; ND>l; l++)
        {
            cin >> dia >> k >> mes >> k >> ano;
            for  (Total=0,i=0; NP>i; i++)
            {
                cin >> opcao;
                if  (opcao==1)
                    Total = Total+1;
            }
            if  (NP==Total && parada==1)
            {
                dia1 = dia;
                mes1 = mes;
                ano1 = ano;
                parada = 0;
                
            }
        }
        if  (parada==1)
            cout << "Pizza antes de FdI" << endl;
        else
            cout << dia1 << k << mes1 << k << ano1 << endl;
        parada=1;
    }
}