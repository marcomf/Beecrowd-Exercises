#include<stdio.h>

int main()
{
	
	int I=1, J=8, i, p;
	for   (i=0,p=1; i<3,p<16; i++,p++)
	{
		J=J-1;
		printf("I=%d J=%d\n",I,J);
		if(i == 2)
			i =-1, I=I+2, J=J+5;
	}
	return 0;
}