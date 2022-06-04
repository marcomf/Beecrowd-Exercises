#include<stdio.h>

int main()
{
	int A, B;
	
	scanf("%d%d",&A,&B);
	while  (A!=0 && B!=0)
	{
		if  (A>0 && B>0)
			printf("primeiro\n");
		else
		{
			if  (A<0 && B>0)
				printf("segundo\n");
			else
			{
				if  (A<0 && B<0)
					printf("terceiro\n");
				else
					printf("quarto\n");
			}
		}
		scanf("%d%d",&A,&B);
	}
	return 0;
}