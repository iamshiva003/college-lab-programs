#include <stdio.h>

int main()
{
    int n,rev=0,rem,temp;
    printf ("Enter any numbers:");
    scanf("%d",&n);
    temp=n;

    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if (temp==rev)
    {
        printf ("Given number is a palindrome\n");
    }
    else
    {
        printf ("Given number is not a palindrome\n");
    }
    return 0;
}
