//Pares entre Cinco Números
#include<stdio.h>

int main()
{
	int i, A, pares=0;
	
	for  (i=0; 5>i; i++)
	{
		scanf("%d",&A);
		if  (A%2==0)
			pares++;
	}
	printf("%d valores pares\n",pares);

	return 0;
}