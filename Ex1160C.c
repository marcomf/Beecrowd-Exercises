#include<stdio.h>

int main(){
	
	int p, N, PA, PB, p1, p2, i;
	float G1, G2;

	scanf("%d",&N);
	for (i=0;i<N;i++)
	{
		scanf("%d%d%f%f",&PA,&PB,&G1,&G2);
		for (p=0;PB>=PA;p++)
		{
			p1 = (PA*G1)/100;
			p2 = (PB*G2)/100;
			PA += p1;
			PB += p2;
		}
		
		if  (p<=100)
			printf("%d anos.\n",p);
	 	else
			printf("Mais de 1 seculo.\n");
	}
	return 0;
}