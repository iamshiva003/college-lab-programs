#include <stdio.h>

int main()
{
    int arr[100],n,i;
    int *ptr=arr;
    printf ("Enter the number of elements you want to use \n");
    scanf ("%d",&n);
    printf ("\nEnter %d Elements \n",n);

    for (i=0;i<n;i++)
        scanf ("%d",&arr[i]);
    printf ("You entered; \n");

    for (i=0;i<n;i++)
        printf ("%d\n",*(ptr+i));
    return 0;
}
