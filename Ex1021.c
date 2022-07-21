//Notas e Moedas
#include<stdio.h>

//pelo número de exceçoes do programa o mais viavel foi fazer por estrutura sequencial

int main(){

	int A;
	double B;

	scanf("%lf",&B);
	A = B;
	B = B - A;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",A/100);
	A = A%100;
	printf("%d nota(s) de R$ 50.00\n",A/50);
	A = A%50;
	printf("%d nota(s) de R$ 20.00\n",A/20);
	A = A%20;
	printf("%d nota(s) de R$ 10.00\n",A/10);
	A = A%10;
	printf("%d nota(s) de R$ 5.00\n",A/5);
	A = A%5;
	printf("%d nota(s) de R$ 2.00\n",A/2);
	A = A%2;
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",A);
	A = A%1;
	B = B*100;
	A = B;
	printf("%d moeda(s) de R$ 0.50\n",A/50);
	A = A%50;
	printf("%d moeda(s) de R$ 0.25\n",A/25);
	A = A%25;
	printf("%d moeda(s) de R$ 0.10\n",A/10);
	A = A%10;
	printf("%d moeda(s) de R$ 0.05\n",A/5);
	A = A%5;
	printf("%d moeda(s) de R$ 0.01\n",A);

	return 0;
}