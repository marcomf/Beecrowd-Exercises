//Números Positivos
#include<stdio.h>

int main()
{
	double A;
	int i, positivos=0;

	for  (i=0; 6>i; i++)
	{
		scanf("%lf",&A);
		if  (A>0)
			positivos++;
	}
	printf("%d valores positivos\n",positivos);

	return 0;
}