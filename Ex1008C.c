#include<stdio.h>

int main()
{
	int numero, horas;
	double salario, salarioC;
	
	scanf("%d%d%lf",&numero,&horas,&salario);
	salarioC = horas*salario;
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",numero,salarioC);
	
	return 0;
}
