#include<stdio.h>

int main()
{
	int N, i;
	double X, Y, div;

	scanf("%d",&N);
	for  (i=0; N>i; i++)
	{
		scanf("%lf%lf",&X,&Y);
		if  (Y==0)
			printf("divisao impossivel\n");
		else
		{
			div = X/Y;
			printf("%.1lf\n",div);
		}
	}
	return 0;
}