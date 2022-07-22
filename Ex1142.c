//PUM
#include<stdio.h>

int main(){
    
    int N, p, i, v;
    scanf("%d",&N);
    
    for(i=1,p=1,v=0; N>v; i++,p++)
    {
        printf("%d ",i);
        if  (p==3)
        {
            printf("PUM\n");
            p = 0;
            i = i+1;
            v = v+1;
        }
    }	
    return 0;
}