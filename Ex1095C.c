#include<stdio.h>

int main()
{
    int p, j, I, J; 

	for  (p=13, j=1, I=-2, J=65; p >= j; j++)
    {
		I = I+3;
		J = J-5;
		printf("I=%d J=%d\n",I,J);
	}
    return 0;
}