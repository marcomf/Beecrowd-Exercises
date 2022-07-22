//Mjölnir
#include<iostream>

using namespace std;

int main()
{
    int i, testes, newtons;
    string t="Thor", heroi;
    
    cin >> testes;
    for (i=0; testes>i; i++)
    {
        cin >> heroi >> newtons;
        if  (t == heroi)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}