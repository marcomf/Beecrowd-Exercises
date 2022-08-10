//Rico do Mate
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int pessoas, i; // quantidade de pessoas / variador de pessoas
    double litros, cuia;	// litros que cabem na garrafa / litros que cabem na cuia
    cin >> pessoas >> litros >> cuia;
    string p[pessoas]; // tamanho do vetor de pessoas
    
    cout << fixed << setprecision(1); // 1 casa depois da vírgula
    litros = litros*10, cuia = cuia*10;
    /////////////////////////////////////////////////////////////
    for (i=0; pessoas>i; i++) // ler o nome de todas as pessoas
    {
        cin >> p[i];
    }
    ////////TA CERTO////////////////////////////////////////////
    
    // lógica
    i = 1;
    while (litros>cuia) // 
    {
        // a cada vez que ele entra a diminuiçao é feita
        litros = litros-cuia;
        
        if  (i==pessoas) // se contador==numero de pessoas / i=1 senao i++
            i = 1;
        else
            i++;
    }
    cout << p[i-1] << " " << litros/10 << endl;
}