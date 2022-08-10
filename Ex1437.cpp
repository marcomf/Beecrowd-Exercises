//Esquerda, Volver!
#include<iostream>
 
using namespace std;

int main()
{
    int a, d;
    char C;
    
    while (cin >> a && a!=0)
    {
        d = 0;
        for (int Q=0; Q<a; Q++)
        {
            cin >> C;
            if(C=='D')
            {
                d=d+1;
                if  (d==4)
                    d=0;
            }
            else
            {
                d = d-1;
                if  (d==-1)
                    d=3;
            }
        }
        if  (d==0)
            cout<<"N" << endl;
        else
        {
            if  (d==1)
                cout<<"L" << endl;
            else
            {
                if  (d==2)
                    cout<<"S" << endl;
                else
                {
                    cout<<"O" << endl;
                }
            }
        }
    } 
}