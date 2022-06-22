#include<stdio.h>

int main()
{
    int A, B, aux;

    scanf("%d%d",&A,&B);
    if  (A>B)
	{
		aux = A;
		A = B;
		B = aux;
	}
    
    while  (A<B-1)
    {
        A++;
        if  (A%5==2 || A%5==3)
            printf("%d\n",A);
    }
    return 0;
}