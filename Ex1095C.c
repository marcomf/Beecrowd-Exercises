#include<stdio.h>

int main()
{
    int p, j, I, J; 

	for  (p=13, j=1, I=-2, J=65; p >= j; j++)
    {
		J = J-5;
		I = I+3;
		printf("I=%d J=%d\n",I,J);
	}
    return 0;
}