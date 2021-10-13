#include <stdio.h>

int main()
{
    int i,sum=0,count=0;
    printf ("Numbers between 100 and 200, divisible by 7:\n");
    for (i=101;i<200;i++)
    {
        if (i%7==0)
        {
            printf ("%5d",i);
            sum=sum+i;
            count=count+1;
        }
    }
    printf ("\n\nThe sum is : %d\n",sum);
    printf ("\n\nThe count is : %d\n",count);

    return 0;
}
