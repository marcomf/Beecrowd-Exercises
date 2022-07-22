//Voleibol
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N, t[3], a[3];
    double TSaque=0, CSaque=0, TBloqueio=0, CBloqueio=0, TAtaque=0, CAtaque=0;
    string Nome;

    cout << fixed << setprecision(2);
    cin >> N;
    for  (int i=0; N>i; i++)
    {
        cin >> Nome;
        cin >> t[0] >> t[1] >> t[2] >> a[0] >> a[1] >> a[2];
        
        TSaque    = TSaque    + t[0];
        CSaque    = CSaque    + a[0];
        TBloqueio = TBloqueio + t[1];
        CBloqueio = CBloqueio + a[1];
        TAtaque   = TAtaque   + t[2];
        CAtaque   = CAtaque   + a[2];
    }
    cout << "Pontos de Saque: "    << CSaque/TSaque*100        << " %." << endl
         << "Pontos de Bloqueio: " <<  CBloqueio/TBloqueio*100 << " %." << endl
         << "Pontos de Ataque: "   << CAtaque/TAtaque*100      << " %." << endl;
    
}