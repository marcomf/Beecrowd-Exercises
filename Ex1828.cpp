//Bazinga!
#include<iostream>

using namespace std;

int main(){
	
	int T;
    string S, R;

	cin >> T;
	for (int i=1; i < T+1; i++)
    {
		cin >> S >> R;
		if ((S == "tesoura" && R == "papel")   || (S == "papel" && R == "pedra")     ||
		    (S == "pedra"   && R == "lagarto") || (S == "lagarto" && R == "Spock")   ||
			(S == "Spock"   && R == "tesoura") || (S == "tesoura" && R == "lagarto") ||
		    (S == "lagarto" && R == "papel")   || (S == "papel" && R == "Spock")     ||
		    (S == "Spock"   && R == "pedra")   || (S == "pedra" && R == "tesoura"))
				cout << "Caso #" << i << ": Bazinga!" << endl;
		else 
        {
            if ((S == "pedra"   && R == "pedra")   || (S == "papel"   && R == "papel")   ||
				(S == "tesoura" && R == "tesoura") || (S == "lagarto" && R == "lagarto") ||
				(S == "Spock"   && R == "Spock"))
				    cout << "Caso #" << i << ": De novo!" << endl;
                else
                    cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
	}
}