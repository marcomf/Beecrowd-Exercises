#include<stdio.h>

int main()
{
	int golsI, golsG, grenal=0, opcao=1, Inter=0, Gremio=0, empates=0;

	while  (opcao==1)
	{
		grenal++;
		scanf("%d%d",&golsI,&golsG);
		if  (golsI>golsG)
			Inter++;
		else
		{
			if  (golsI<golsG)
				Gremio++;
			else
				empates++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&opcao);
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",grenal,Inter,Gremio,empates);
	
	if  (Gremio>Inter)
		printf("Gremio venceu mais\n");
	else
	{
		if  (Inter>Gremio)
			printf("Inter venceu mais\n");
		else
			printf("Nao houve vencedor\n");
	}
	return 0;
}