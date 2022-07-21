//Número Perfeito
#include<stdio.h>

int main()
{
	int testes, A, i, j, total=0;
	
	scanf("%d",&testes);
	for  (i=0; testes>i; i++)
	{
		scanf("%d",&A);
		for  (j=1; A>j; j++)
		{
			if  (A%j==0)
				total = total + j;
		}
		
		if  (total == A)
			printf("%d eh perfeito\n",A);
		else
			printf("%d nao eh perfeito\n",A);
		total=0;
	}
	return 0;
}