//Idades
#include<stdio.h>

int main()
{
	int A, total=0, i=0;
	double media;

	scanf("%d",&A);
	while  (A>0)
	{
		i++;
		total = total+A;
		scanf("%d",&A);
	}
	media = total/(double)i;
	printf("%.2lf\n",media);

	return 0;
}