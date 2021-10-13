#include <stdio.h>

int main ()
{
    int n1, n2, gcd, lcm, remainder,numerator, denominator;
    printf ("Enter two numbers \n");
    scanf ("%d %d", &n1, &n2);
    if (n1>n2)
    {
        numerator = n1;
        denominator = n2;
    }
    else
    {
        numerator=n2;
        denominator=n1;
    }
    remainder=numerator%denominator;
    while(remainder!=0)
    {
        numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    gcd=denominator;
    lcm=n1*n2/gcd;
    printf ("GCD = %d\n", gcd);
    printf ("LCM = %d\n", lcm);

    return 0;
}
