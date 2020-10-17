#include<stdio.h>
#include<string.h>
int main()
{
    char inp[10000], ident[1000], assi, sub1[100], sub2[100], sign, end;
    int i, j, k,l, p1=0,p2=0,p3=0,s1=0, s2=0;

    scanf("%[^\n]", inp);
    l = strlen(inp);

    for(i=0; i<l; i++)
    {
        if (inp[i]=='=')
        {
            if (p2==0)
            {
                p1=1;
                assi=inp[i];
                p2=1;
            }

        }

        else if(p2 == 1)
        {
            if (inp[i]=='+')
            {
                sign = inp[i];
                p3=1;
            }
            else if (inp[i]=='-')
            {
                sign = inp[i];
                p3=1;
            }
            else if (inp[i]=='*')
            {
                sign = inp[i];
                p3=1;
            }
            else if (inp[i]=='/')
            {
                sign = inp[i];
                p3=1;
            }
            else if (p3==0)
            {
                sub1[s1]=inp[i];
                s1++;
            }
            else if (p3==1 && inp[i]!=';')
            {
                sub2[s2]=inp[i];
                s2++;
            }
            else
            {
                end = inp[i];
            }

        }

        else
        {
            if (p1==0)
            {
                ident[i]=inp[i];
            }
        }
    }

    printf("Identifier : ");
    j = strlen(ident);
    for(k=0; k<j; k++)
    {
        printf("%c",ident[k]);
    }
    printf("\n");
    printf("Assignment operator : %c\n", assi);

    printf("Integer literal : ");
    int x = strlen(sub1);
    for(k=0; k<x; k++)
    {
        printf("%c", sub1[k]);
    }
    printf(",");
    int y = strlen(sub2);
    for(k=0; k<y; k++)
    {
        printf("%c", sub2[k]);
    }
    printf("\n");
    printf("Oparator : %c\n", sign);
    printf("End of the statement : %c\n",end);

    return 0;
}
