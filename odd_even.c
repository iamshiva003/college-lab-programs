#include <stdio.h>

int main ()
{
    int number;
    printf ("Enter an int value to check Even or Odd \n");
    scanf ("%d", &number);

    if (number%2 == 0)
        printf ("Given number %d is Even number \n", number);
    else
        printf ("Given number %d is Odd number \n", number);

    return 0;
}
