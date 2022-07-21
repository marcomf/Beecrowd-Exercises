//Soma de Ímpares Consecutivos III
#include<stdio.h>

int main()
{
	int testes, i, j, X, Y, total=0;
	
	scanf("%d",&testes);
	for (i=0; testes>i; i++)
	{
		scanf("%d%d",&X,&Y);
		for (j=0; Y>j; X++)
		{
			if  (X%2!=0)
			{
				total = total + X;
				j++;
			}
		}
		printf("%d\n",total);
		total=0;
	}
	return 0;
}