//Reservatório de Mel
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    double VolumeMel, Diametro, Raio, Altura, n=3.14, Area;
    cout << fixed << setprecision(2);

    while (cin >> VolumeMel >> Diametro)
    {	
        Raio = Diametro/2;
        Altura = VolumeMel/(double)(n*(Raio*Raio));
        Area = (2*n*(Raio*Raio))/2.;
        cout << "ALTURA = " << Altura << endl;
        cout << "AREA = "   << Area   << endl;
    }
}