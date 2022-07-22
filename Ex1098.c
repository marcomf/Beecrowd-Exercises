//Sequência IJ 4
#include<stdio.h>

int main()
{
    
    double I=0, J=1, t=0, i, p;
    
    for  (i=1,p=1; I<=2; p++,J++)
    {
        printf("I=%d J=%d\n",I,J);
        if  (p==3)
            I = I+0.2, p = 0, t = t+1, J = 0, J = J+t*0.2;			
    }
    return 0;
}