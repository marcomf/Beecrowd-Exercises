//Salário com Bõnus
#include<stdio.h>

int main()
{
	char nome[101];
	double salario, vendas, bonus;
	
	scanf("%s%lf%lf",&nome,&salario,&vendas);
	bonus = (vendas*15)/100;
	salario = salario + bonus;
	printf("TOTAL = R$ %.2lf\n",salario);
	
	return 0;
}