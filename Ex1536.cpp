//Libertadores
#include<iostream>

using namespace std;

int main(){
    
    int N, TimeCasaC, VisitanteF, VisitanteC, TimeCasaF, PontosCasa=0, PontosVisitante=0, GolsCasa=0, GolsVisitante=0;
    string lixo;
    
    cin >> N;
    for (int i=0; N>i; i++)
    {
        cin >> TimeCasaC  >> lixo >> VisitanteF;
        
        if  (TimeCasaC>VisitanteF)
            PontosCasa = PontosCasa+3;
        else
        {
            if  (VisitanteF>TimeCasaC)
                PontosVisitante = PontosVisitante+3;
            else
            {
                PontosVisitante=PontosVisitante+1;
                PontosCasa = PontosCasa+1;
            }
        }//final da primeira contagem;
        
        cin >> VisitanteC >> lixo >> TimeCasaF;
        if  (TimeCasaF>VisitanteC)
            PontosCasa = PontosCasa+3;
        else
        {
            if  (VisitanteC>TimeCasaF)
                PontosVisitante = PontosVisitante+3;
            else
            {
                PontosVisitante = PontosVisitante+1;
                PontosCasa = PontosCasa+1;
            }
        }//final da segunda contagem;
        
        if  (PontosCasa>PontosVisitante)
        {
            cout << "Time 1" << endl;
            PontosCasa = 0;
            PontosVisitante = 0;
        }
        else
        {
            if(PontosVisitante>PontosCasa)
            {
                cout << "Time 2" << endl;
                PontosCasa = 0;
                PontosVisitante = 0;
            }
            else//começo dos pontos iguais;
            {
                GolsCasa = TimeCasaC+TimeCasaF-VisitanteC-VisitanteF;
                GolsVisitante = VisitanteC+VisitanteF-TimeCasaC-TimeCasaF;
                
                if  (GolsCasa>GolsVisitante)
                {
                    cout << "Time 1" << endl;
                    GolsCasa = 0;
                    GolsVisitante = 0;
                }
                else
                {
                    if  (GolsVisitante>GolsCasa)
                    {
                        cout << "Time 2" << endl;
                        GolsCasa = 0;
                        GolsVisitante = 0;
                    }
                    else
                    {
                        GolsCasa=VisitanteC;
                        GolsVisitante=TimeCasaC;
                        
                        if  (GolsCasa>GolsVisitante)
                        {
                            cout << "Time 1" << endl;
                            GolsCasa = 0;
                            GolsVisitante = 0;
                        }
                        else
                        {
                            if  (GolsVisitante>GolsCasa)
                            {
                                cout << "Time 2" << endl;
                                GolsCasa = 0;
                                GolsVisitante = 0;
                            }
                            else
                            {
                                cout << "Penaltis" << endl;
                                GolsCasa = 0;
                                GolsVisitante = 0;
                            }
                        }
                    }
                }
            }	
        }
    }
}