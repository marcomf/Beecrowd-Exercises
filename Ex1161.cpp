//Soma de Fatoriais
#include<iostream>

using namespace std;

int main()
{
    int M, N;
    long long int f1, f2;
    
    while (cin >> M >> N)
    {
        f1 = N;
        f2 = M;
        if  (N==0 || N==1)
            f1=1;
        if  (M==0 || M==1)
            f2=1;
        for (int i=1; N > i; i++)
            f1 = f1*i;
        for (int p=1; M > p; p++)
            f2 = f2*p;
        cout << f1+f2 << endl;
    }
}