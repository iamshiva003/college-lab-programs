#include <stdio.h>

int findlength(char str[]);

int main()
{
    char str[100];
    int length;

    printf ("Enter the string : \n");
    gets(str);

    length = findlength(str);

    printf ("Length of the String is : %d\n",length);
    return 0;
}

int findlength(char str[])
{
    int len =0;
    while (str[len] != '\0')
        len ++;
    return (len);
}
