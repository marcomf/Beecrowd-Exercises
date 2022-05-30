#include<stdio.h>

int main()
{
	int hi, mi, hf, mf, ht, mt;

	scanf("%d%d%d%d",&hi,&mi,&hf,&mf);
	hf = hf*60 + mf, hi = hi*60 + mi;
	ht = hf - hi;

	if  (ht <= 0)
    {
		ht = ht+(60*24);
	}
	mt = ht%60;
	ht = ht/60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ht,mt);

	return 0;
}