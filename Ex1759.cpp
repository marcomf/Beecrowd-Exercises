//Ho Ho Ho
#include<iostream>

using namespace std;

int main()
{
    int A, i;

    cin >> A;
    for  (i=0; A>i; i++)
    {
        if  (i==A-1)
            printf("Ho!\n");
        else
            printf("Ho ");
    }
}