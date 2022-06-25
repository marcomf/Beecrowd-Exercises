#include<stdio.h>

int main()
{
	int testes, j, A, i, p=0;
	
	scanf("%d",&testes);
	for (j=0; testes>j; j++)
	{
		scanf("%d",&A);
		for (i=1; A>i; i++)
		{
			if  (A%i==0)
				p++;
		}
		
		if  (p==1)
			printf("%d eh primo\n",A);
		else
			printf("%d nao eh primo\n",A);
		p=0;
	}
	return 0;
}