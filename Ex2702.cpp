//Escolha Difícil
#include<iostream>

using namespace std;

int main()
{	
    int f, b, m, f1, b1, m1, ft, bt, mt;
    
    cin >> f >> b >> m;
    cin >> f1 >> b1 >> m1;
    ft = f1-f;
    bt = b1-b;
    mt = m1-m;
    if  (ft>0 && bt>0 && mt>0)
        cout << ft+bt+mt << endl;
    else
    {
        if  (ft>0 && bt>0 && mt <=0)
            cout << ft+bt << endl;
        else
        {
            if  (ft>0 && mt>0 && bt <=0)
                cout << ft+mt << endl;
            else
            {
                if  (mt>0 && bt>0 && ft <=0)
                    cout << mt+bt << endl;
                else 
                {
                    if  (ft>0 && mt<=0 && bt<=0)
                        cout << ft << endl;
                    else
                    {
                        if  (mt>0 && ft<=0 && bt<= 0)
                            cout << mt << endl;
                        else
                        {
                            if  (bt>0 && ft<=0 && mt<= 0)
                                cout << bt << endl;
                            else
                                cout << "0" << endl;
                        }
                    }
                }
            }
        }
    }
}