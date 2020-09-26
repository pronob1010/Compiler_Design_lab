#include <stdio.h>
#include <string.h>
int main()
{
    int j =0;
    char c[100],NUMBER[200];
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


            if ((c[i-1] == '\\' ) && (c[i] == 'n'))
            {
                i+=2;
                printf("\n");
            }

            else if ((c[i-1] =='\\') && (c[i] =='\\'))
            {
                f = 1;
            }
            else if ((c[i-1] =='\\') && (c[i] =='*'))
            {
                f = 1;
            }
            else if ((c[i-1] =='*') && (c[i] =='\\'))
            {
                i+=2;
                f = 0;
            }
            else if((c[i-1] >= '0') && (c[i-1]<='9') && (f == 0))
            {
                NUMBER[k] = c[i-1];
                k++;
            }

            if(f == 0)
            {
                printf("%c",c[i-1]);
            }
            i++;
        }
        printf("\n");
        if (k>0)
        {
            printf("Number on String : ");
        }
        for (int p=0;p<k; p++)
        {

            printf("%c", NUMBER[p]);

        }
    }
    return 0;
}
