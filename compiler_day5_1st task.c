#include<stdio.h>
int main()
{
    char s[100];
    int i,j;
    scanf("%[^\n]", s);

    if ((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))
    {
        printf("Identifier");
    }
    else if (s[0]=='_')
    {
        if ((s[1]>='a' && s[1]<='z') || (s[1]>='A' && s[1]<='Z'))
        {
            printf("Identifier");
        }
        else
        {
            printf("Not an identifier");
        }
    }
    else
    {
        printf("Not an identifier");
    }
    return 0;
}
