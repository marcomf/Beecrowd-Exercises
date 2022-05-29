#include<stdio.h>

int main()
{
	double A, B, C, pi;
	double t, c, trap, q, r;
	pi = 3.14159;
	
	scanf("%lf%lf%lf",&A,&B,&C);
	t = A*C/2.0;
	c = pi*(C*C);
	trap = ((A+B)*C)/2.0;
	q = B*B;
	r = A*B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,c,trap,q,r);
	
	return 0;
}
