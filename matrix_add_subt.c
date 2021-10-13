/*Write a c program to find the addition and subtraction of tho matrices.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a[10][10],b[10][10],add[10][10],sub[10][10],i,j,row,col;
    printf ("enter the size of matrix\n");
    scanf ("%d%d",&row,&col);
    printf ("enter the elements of A matrix\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf ("%d",&a[i][j]);

        }
    }
    printf ("enter the elements of B matrix\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf ("%d",&b[i][j]);

        }
    }
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf ("\n addition of two matrices \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf ("%4d",add[i][j]);
        }
        printf ("\n");
    }
    printf ("\n subtraction of two matrices\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf ("%4d",sub[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
