//Sequência de Números e Soma
#include<stdio.h>

int main()
{
	int M, N, aux, total=0;
	
	scanf("%d%d",&M,&N);
	while  (M > 0 && N > 0)
	{
		if  (M>N)
		{
			aux = M;
			M = N;
			N = aux;
		}

		for  (;N>=M; M++)
		{
			total = total+M;
			printf("%d ",M);
		}
		printf("Sum=%d\n",total);
		total=0;
		scanf("%d%d",&M,&N);
	}
	return 0;
}