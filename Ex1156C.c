#include<stdio.h>

int main()
{
	double i, S=1, j;

	for  (i=3,j=2; i!=41; i=i+2,j=j*2)
		S = S + (double)i/j;
	printf("%.2lf\n",S);

	return 0;
}