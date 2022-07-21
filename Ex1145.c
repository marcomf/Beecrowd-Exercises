//Sequência Lógica 2
#include<stdio.h>

int main()
{
	int A, B, i, j;

	scanf("%d%d",&A,&B);
	for  (i=1,j=1; B>=i; j++,i++)
	{
		if  (j==A)
		{
			printf("%d\n",i);
			j=0;
		}
		else
		{
			if  (B==i)
				printf("%d\n",i); 
			else
				printf("%d ",i); 
		}
	}
	return 0;
}