//Sequência IJ 1
#include<stdio.h>

int main()
{
	int p, i, I, J; 

	for  (p=13, i=1, I=-2, J=65; p >= i; i++)
	{
		I = I+3;
		J = J-5;
		printf("I=%d J=%d\n",I,J);
	}
	return 0;
}