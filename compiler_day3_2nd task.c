#include <stdio.h>

int main()
{
    char str1[80]="a* abb aaaa bbbbb a*b+", str2[80];
    int l, i, j;

    printf("Enter a string to find: ");
    gets(str2);


    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    int pos = i - j + 1;

    if (j == l)
    {
        printf("\nString found.\nAt position %d", pos);
    }
    else
    {
        printf("\nString not found");
    }

    return 0;
}
