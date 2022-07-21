//Sequência IJ 2
#include<stdio.h>

int main()
{
	int i, j;

	for  (int i=1,j=7; 10>i; i+=2)
	{
		printf("I=%d J=%d\n",i,j);
		j-=1;
		printf("I=%d J=%d\n",i,j);
		j-=1;
		printf("I=%d J=%d\n",i,j);
		if(j==5)
			j=7;
	}
	return 0;
}