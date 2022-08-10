//Língua do P
#include<iostream>

using namespace std;

int main()
{
    string vetor;

    getline(cin,vetor);
    for (int i=0; vetor[i]; i++)
    {
        if  (vetor[i]==' ')
            cout << " ";
        if  (vetor[i]=='p')
        {
            cout << vetor[i+1];
            i++;
        }
    }
    cout << endl;
}