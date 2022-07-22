#include<stdio.h>
#include<string.h>

int main()
{
    int num=0, total=0;
    char frase[8], grito[8], lixo[200];

    strcpy(grito,"caw caw");

    scanf("%[^\n]",frase);
    while  (num != 3)
    {
        while  (strcmp(frase,grito)!=0)
        {
            //se o primeiro for 1
            if  (frase[0]=='*')
            {
                //se o segundo for 0 e o terceiro for 0
                if  (frase[1]=='-' && frase[2]=='-')
                    total = total+4;
                else
                {
                    //se o segundo for 1 e o terceiro for 0
                    if  (frase[1]=='*' && frase[2]=='-')
                        total = total+6;
                    else
                    {
                        //se todos forem 1
                        if  (frase[1]=='*' && frase[2]=='*')
                            total = total+7;
                        //se o segundo for 0 e o terceiro 1
                        else
                        {
                            if  (frase[1]=='-' && frase[2]=='*')
                                total = total+5;
                        }
                    }
                }
            }
            else
            {
                //se o segundo for 1 e o primeiro 0
                if  (frase[1]=='*')
                {
                    if  (frase[2]=='*')
                        total = total+3;
                    else
                        total = total+2;
                }
                //se o terceiro for 1 e o resto 0
                else
                {
                    if  (frase[2]=='*')
                        total = total+1;
                    else
                        total = total+0;
                }
            }
            
            strcpy(lixo,frase);
            scanf("%*c%[^\n]",frase);
        }
        printf("%d\n",total);
        
        if  (num!=2)
        {
            strcpy(lixo,frase);
            scanf("%*c%[^\n]",frase);
        }
        
        total=0;
        num++;
    }
    return 0;
}