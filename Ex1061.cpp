//Tempo de um Evento
#include<iostream>

using namespace std;

int main(){
	
	string lixo;
	int Dia_I, Hora_I, Minuto_I, Segundo_I, Tempo_I,Total;
	int Dia_F, Hora_F, Minuto_F, Segundo_F, Tempo_F;
	
	cin >> lixo   >> Dia_I;
	cin >> Hora_I >> lixo >> Minuto_I >> lixo >> Segundo_I;
	cin >> lixo   >> Dia_F;
	cin >> Hora_F >> lixo >> Minuto_F >> lixo >> Segundo_F;
	
	Tempo_I = Segundo_I + Minuto_I*60 + Hora_I*60*60 + Dia_I*60*60*24;
	Tempo_F = Segundo_F + Minuto_F*60 + Hora_F*60*60 + Dia_F*60*60*24;
	
	Total = Tempo_F - Tempo_I;
	
	cout << Total/(60*60*24) << " dia(s)"     << endl;
	Total = Total%(60*60*24);
	cout << Total/(60*60)    << " hora(s)"    << endl;
	Total = Total%(60*60);
	cout << Total/60         << " minuto(s)"  << endl;
	Total = Total%60;
	cout << Total            << " segundo(s)" << endl;
}