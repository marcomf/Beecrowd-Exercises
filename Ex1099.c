//Soma de Ímpares Consecutivos II
#include<stdio.h>

int main()
{
	int N, i, X, Y, aux, total=0;

	scanf("%d",&N);
	for  (i=0; N>i; i++)
	{
		scanf("%d%d",&X,&Y);
		if  (X>Y)
		{
			aux = X;
			X = Y;
			Y = aux;
		}

		X++;
		for  (;Y>X; X++)
		{
			if  (X%2!=0)
				 total = total+X;
		}
		printf("%d\n",total);
		total = 0;
	}
	return 0;
}