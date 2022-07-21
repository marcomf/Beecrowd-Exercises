//Múltiplos de 13
#include<stdio.h>

int main()
{
	int A, B, aux, Soma=0;
	scanf("%d%d",&A,&B);
	
	if  (A>B)
	{
		aux = A;
		A = B;
		B = aux;
	}
	while  (A<=B)
	{
		if  (A%13!=0)
		{
			Soma = Soma+A;
		}
		A++;
	}
	printf("%d\n",Soma);

	return 0;
}