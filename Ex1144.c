//Sequência Lógica
#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d",&n);
    for  (i=1; n>=i; i++)
    {
        printf("%d %d %d\n",i,i*i,i*(i*i));
        printf("%d %d %d\n",i,i*i+1,i*(i*i)+1);
    }
    
    return 0;
}