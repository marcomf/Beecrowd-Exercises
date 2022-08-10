//Leitura Ótica
#include<iostream>

using namespace std;

int main()
{
    int N, vet[5];
    
    while (cin >> N && N!=0)
    {
        for (int i=0; N>i; i++)
        {
            for (int p=0; 5>p; p++)
            {
                cin >> vet[p];
            }
            if  (vet[0]<=127 && vet[1]>127 && vet[2]>127 && vet[3]>127 && vet[4]>127)
                cout << "A" << endl;
            else
            {
                if  (vet[1]<=127 && vet[0]>127 && vet[2]>127 && vet[3]>127 && vet[4]>127)
                    cout << "B" << endl;
                else
                {
                    if  (vet[2]<=127 && vet[0]>127 && vet[1]>127 && vet[3]>127 && vet[4]>127)
                        cout << "C" << endl;
                    else
                    {
                        if  (vet[3]<=127 && vet[0]>127 && vet[1]>127 && vet[2]>127 && vet[4]>127)
                            cout << "D" << endl;
                        else
                        {
                            if  (vet[4]<=127 && vet[0]>127 && vet[1]>127 && vet[2]>127 && vet[3]>127)
                                cout << "E" << endl;
                            else
                                cout << "*" << endl;
                        }
                    }
                }
            }
        }
    }	
}