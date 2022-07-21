//Ultrapassando Z
#include<stdio.h>

int main()
{
	int X, Z, i, total=0;
	
	scanf("%d %d",&X,&Z);
	while  (X>=Z)
		scanf("%d",&Z);
	
	for   (i=0; total<Z; i++)
		total = X + i + total;

	printf("%d\n",i);
	
	return 0;
}