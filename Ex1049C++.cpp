#include<iostream>

using namespace std;

int main()
{
    string A, B, C;

    cin >> A >> B >> C;
    if  (A == "vertebrado")
    {
        if  (B == "ave")
        {
            if  (C == "carnivoro")
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if  (C == "onivoro")
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if  (B == "inseto")
        {
            if  (C == "hematofago")
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if  (C == "hematofago")
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
}