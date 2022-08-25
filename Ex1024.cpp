//Criptografia
#include<iostream>

using namespace std;

int main()
{
    int testes, tamanho, tamanhonew;
    string str, strnew = "";
    char lixo;
    
    cin >> testes;
    scanf("%c",&lixo);
    for (int i=0; testes>i; i++)
    {
        fflush(stdin);
        getline(cin,str);
        tamanho = str.length();
        //passagem Minúsculas e Maíusculas
        for (int j=0; tamanho>j; j++)
        {
            if  (((int)str[j]>=65 && (int)str[j]<=90) || ((int)str[j]>=97 && (int)str[j]<=122)) //letra Maiúscula e Minuscula
                str[j] = (int)str[j] + 3;
        }
        //passagem de inversão de string
        for (int j=0; tamanho>j; j++)
        {
            strnew = str[j] + strnew;
        }   
        //passagem de caracter
        for (int j=tamanho/2; tamanho>j; j++)
        {
            strnew[j] = (int)strnew[j]-1;
        }
        cout << strnew << endl;
        strnew = "";
    }
}