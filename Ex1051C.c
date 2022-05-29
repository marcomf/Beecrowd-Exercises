#include<stdio.h>

int main(){
	
	double S;
	scanf("%lf",&S);
	
	if  (S >= 0 && S <= 2000)
        printf("Isento\n");
    else
    {
        if  (S > 2000 && S <= 3000)
            S = ((S - 2000)*8)/100;
        else
        {
            if  (S > 3000 && S <= 4500)
		        S = ((S - 3000)*18)/100 + 80;
            else
                S = ((S - 4500)*28)/100 + 80 + 270;
        }
        printf("R$ %.2lf\n",S);
	}
    return 0;
}