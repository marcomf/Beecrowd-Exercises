//Sequência S
#include<stdio.h>

int main()
{
	double S=1;
	int i;

	for(i=2; i<=100; i++)
		S = S + 1./i;
	printf("%.2lf\n",S);

	return 0;
}