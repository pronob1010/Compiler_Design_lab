#include<stdio.h>
#include<string.h>
int main()
{
    char ans[]="yes";
    char s[20],s1[20],s2[20],s3[20];
    int i,q1[10],j,c=0;

    printf("Haveing Cough ?\n");
    scanf("%s",s);
    if(strcmp(s,ans)==0)
    {
        q1[0] = 1;
    }
    else
    {
        q1[0] = 0;
    }


    printf("Having Fever ?\n");
    scanf("%s",s1);

    if(strcmp(s1,ans)==0)
    {
        q1[1] = 1;
    }
    else
    {
        q1[1] = 0;
    }


    printf("Having Tiredness ?\n");
    scanf("%s",s2);

    if(strcmp(s2,ans)==0)
    {
        q1[2] = 1;
    }
    else
    {
        q1[2] = 0;
    }

    printf("Having Breathing problem ?\n");
    scanf("%s",s3);

    if(strcmp(s3,ans)==0)
    {
        q1[3] = 1;
    }
    else
    {
        q1[3] = 0;
    }

    for(j=0;j<=3;j++)
    {
        if (q1[j]==1)
        {
            c++;
        }
    }
    printf("Positive case:%d\n", c);
    printf("Negative case:%d\n", 4-c);
    if (c==4)
    {
        printf("Yes,he/she may have coronavirus.");
    }
    else
    {
        printf("No,he/she may have not coronavirus.");
    }

    return 0;
}
