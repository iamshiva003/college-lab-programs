#include <stdio.h>
int main()
{
    int x, j, rows;

    printf ("To see how many rows of stars you want enter the no of rows\n");

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(x=rows; x>=1; --x)
    {
        for(j=1; j<=x; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
