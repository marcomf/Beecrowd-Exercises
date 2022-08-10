//LED
#include<iostream>

using namespace std;

int main()
{
    int N, led=0, A, i, j;
    string num;
    
    cin >> N;
    for (i=0; N>i; i++)
    {
        cin >> num;
        A = num.size();
        for (j=0; A>j; j++)
        {
            led = (num[j]=='0') ? led=led+6:
                  (num[j]=='1') ? led=led+2:
                  (num[j]=='2') ? led=led+5:
                  (num[j]=='3') ? led=led+5:
                  (num[j]=='4') ? led=led+4:
                  (num[j]=='5') ? led=led+5:
                  (num[j]=='6') ? led=led+6:
                  (num[j]=='7') ? led=led+3:
                  (num[j]=='8') ? led=led+7:
                   led=led+6;
        }
        cout << led << " leds" << endl;
        led = 0; 
    }
}