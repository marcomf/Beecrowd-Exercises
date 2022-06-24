#include<stdio.h>

int main()
{
	int A, i;

	scanf("%d",&A);
	for  (i=1; A>=i; i++)
		printf("%d %d %d\n",i,i*i,i*i*i);

	return 0;
}