#include<stdio.h>
int main()
{
    int array[4],i,k,j,temp;


    for(i=0; i<3; i++)
    {
        scanf("%d", &array[i]);
    }


    for (k = 0; k < 3; k++)
    {

        for (j = k + 1; j < 3; ++j)
        {

            if (array[k] > array[j])
            {

                temp =  array[k];
                array[k] = array[j];
                array[j] = temp;

            }

        }
    }

    printf("Max number : %d\nMid Largest : %d\nLast Largest : %d\n", array[2],array[1],array[0]);

    return 0;
}
