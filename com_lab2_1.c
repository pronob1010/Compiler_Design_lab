#include <stdio.h>
#include <string.h>
int main()
{
    int j =0;
    char c[100];
    int i,f=0,len;

    scanf("%[^\n]", &c);

    len = strlen(c);

    if (len == 0)
    {
        printf("You did not entered any number.");
    }
    else
    {
        int k=0;
        i= 1;
        printf("\nExpected Output : \n");
        while(i<=len)
        {


            if ((c[i-1] == '/' ) && (c[i] == 'n'))
            {
                i+=2;
                printf("\n");
            }


            else if ((c[i-1] =='/') && (c[i] =='/'))
            {
                f = 1;
            }
            else if ((c[i-1] =='/') && (c[i] =='*'))
            {
                f = 1;
            }
            else if ((c[i-1] =='*') && (c[i] =='/'))
            {
                i+=2;
                f = 0;
            }

            if(f == 0)
            {
                printf("%c",c[i-1]);
            }

            i++;
        }

    }
    return 0;
}
