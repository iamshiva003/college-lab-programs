/* write a c program to find the factorial of a number using function.*/
#include <stdio.h>

void fact(int num);
int main()
{
    int n;
    printf ("enter a number\n");
    scanf("%d",&n);
    if(n<0)
        printf ("invalid number");
    else
        fact(n);
    return 0;
}

void fact(int num)
{
    int fact=1,i;
    for (i=1;i<=num;i++)
        fact=fact*i;
    printf ("factorial of %d is %d",num,fact);
}
