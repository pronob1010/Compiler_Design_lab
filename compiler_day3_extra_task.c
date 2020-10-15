#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    int f, i, fc=-1, len;

    scanf("%[^\n]", &s);

    len = strlen(s);

    f = 0;
    int st = 0;


    for(i = 0; i<len; i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            st = 1;
        }
        if(s[i] =='.')
        {
            f = 1;
        }

        if(f == 1)
        {
            fc++;
        }
    }
    printf("Data Type is : ");
    if (st==1)
    {
        printf("character ");
    }
    else
    {
        if(f==0)
        {
            printf("Integer");
        }
        else if(fc>0 && fc<=6)
        {
            printf("Float");
        }
        else if(fc>6 && fc<=15)
        {
            printf("Double");
        }
        else if(fc>15 && fc<=19)
        {
            printf("Long Double");
        }
    }
    return 0;
}

