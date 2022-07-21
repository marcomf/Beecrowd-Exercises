//Sequências Crescentes
#include<stdio.h>

int main()
{
	int X, i;
	
	scanf("%d",&X);
	while(X!=0)
	{
		for  (i=1; i<=X; i++)
		{
			if  (i==X)
				printf("%d\n",i);
			else
				printf("%d ",i);
		}
		scanf("%d",&X);
	}
	return 0;
}