//Idade em Dias
#include<stdio.h>

int main()
{
	int idade, anos, mes, dia;

	scanf("%d",&idade);
	anos = idade/365;
	idade = idade%365;
	mes = idade/30;
	dia = idade%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,mes,dia);

	return 0;
}