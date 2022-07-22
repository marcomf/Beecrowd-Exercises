//Bem-vindos e Bem-vindas ao Inverno!
#include<iostream>

using namespace std;

int main()
{
    int dia1 ,dia2, dia3, dif1_2, dif2_3;
    
    scanf("%d%d%d",&dia1,&dia2,&dia3);
    if(dia2>dia1)
        dif1_2=dia2-dia1;
    else
        dif1_2=dia1-dia2;

    if(dia3>dia2)
        dif2_3=dia3-dia2;
    else
        dif2_3=dia2-dia3;

    (dia1 < dia2  && dia2 <  dia3 && dif1_2 >  dif2_3) ? cout << ":(" << endl:
    (dia1 < dia2  && dia2 <  dia3 && dif2_3 >= dif1_2) ? cout << ":)" << endl:
    (dia1 > dia2  && dia2 >  dia3 && dif1_2 >  dif2_3) ? cout << ":)" << endl:
    (dia1 > dia2  && dia2 >  dia3 && dif2_3 >= dif1_2) ? cout << ":(" << endl:
    (dia1 > dia2  && dia2 <= dia3)                     ? cout << ":)" << endl:
    (dia1 < dia2  && dia2 >= dia3)                     ? cout << ":(" << endl: 
    (dia1 == dia2 && dia2 <  dia3)                     ? cout << ":)" << endl:
    cout << ":(" << endl;
}