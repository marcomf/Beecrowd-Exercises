//Experiências
#include<iostream>

using namespace std;

int main()
{
	int i, testes, cobaias, totalC=0, totalR=0, totalS=0;
	char tipo;
	double pc, pr, ps, total=0;

	scanf("%d",&testes);
	for   (i=0;  testes>i; i++)
	{
		scanf("%d",&cobaias);
		cin >> tipo;
		total = total + cobaias;
		if  (tipo == 'C')
		{
			totalC = totalC + cobaias;
		}
		else
		{
			if  (tipo == 'R')
			{
				totalR = totalR + cobaias;
			}
			else
			{
				totalS = totalS + cobaias;
			}
		}
	}
	pc = (totalC/total)*100;
	ps = (totalS/total)*100;
	pr = (totalR/total)*100;
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",(int)total,totalC,totalR,totalS);
	printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",pc,pr,ps);

	return 0;
}