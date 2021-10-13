/* Write a C program to find if a character is alphabetic or numeric or special character. */

#include <stdio.h>

int main()
{
    char ch;
    printf ("Enter the character\n");
    scanf ("%c",&ch);
    if ((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z'))
        printf ("Its an alphabet\n");
    else
        if (ch>='0'&&ch<='9')
        printf ("Its a number\n");
    else
        printf ("Its a special character\n");
    return 0;
}
