//Validação de Nota
#include<stdio.h>

int main()
{
	int N=0;
	double A, media=0;

	while  (N!=2)
	{
		scanf("%lf",&A);
		if  (A>=0 && A<=10)
		{
			media = media+A;
			N++;
		}
		else
			printf("nota invalida\n");
	}
	media = media/2;
	printf("media = %.2lf\n",media);

	return 0;
}