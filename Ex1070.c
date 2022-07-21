//Seis Números Ímpares
#include<stdio.h>

int main()
{
	int X, i;

	scanf("%d",&X);
	for  (i=0; 6>i; X++)
	{
		if  (X%2!=0)
		{
			printf("%d\n",X);
			i++;
		}
	}
	return 0;
}