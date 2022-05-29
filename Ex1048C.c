#include<stdio.h>

int main()
{
    double s, nv, r;

    scanf("%lf",&s);
    if  (s >= 0 && s <= 400)
    {
		r = (s*15)/100.0;
		nv = r + s;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",nv,r);
    }
    else
    {
        if  (s > 400 && s <= 800)
        {
            r = (s*12)/100.0;
		    nv = r + s;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",nv,r);
        }
        else
        {
            if  (s > 800  && s <= 1200)
            {
                r = (s*10)/100.0;
                nv = r + s;
                printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",nv,r);
            }
            else
            {
                if  (s > 1200 && s <= 2000)
                {
                    r = (s*7)/100.0;
                    nv = r + s;
                    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",nv,r);
                }
                else
                {
                    r = (s*4)/100.0;
		            nv = r + s;
                    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",nv,r);

                }
            }
        }
    }
    return 0;
}