#include<stdio.h>

int main()
{
	int N, i;
	
	scanf("%d",&N);
	for (i=1; N>=i; i++)
	{
		if  (N%i==0)
			printf("%d\n",i);
	}
	return 0;
}