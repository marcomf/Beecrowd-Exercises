#include<stdio.h>

int main()
{
	int entrada, maior=-10000, i;
	
	for  (i=0; 3>i; i++)
	{
		scanf("%d",&entrada);
		if  (entrada>maior)
		{
			maior = entrada;
		}
	}
	printf("%d eh o maior\n",maior);
	
	return 0;
}