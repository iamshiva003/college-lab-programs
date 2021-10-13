#include <stdio.h>

int main()
{
    int a,b;
    int choice;
    printf ("Enter your choice \n");
    printf ("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf ("%d", &choice);
    printf ("Enter 2 integer numbers \n");
    scanf ("%d %d", &a,&b);

    switch (choice)
    {
        case 1: printf ("%d + %d = %d\n",a,b,(a+b));
        break;

        case 2: printf ("%d-%d=%d\n",a,b,(a-b));
        break;

        case 3: printf ("%d * %d = %d\n",a,b,(a*b));
        break;

        case 4: if(b != 0)
                printf ("%d / %d = %d \n", a,b,(a/b));
                else
                    printf ("Number cant be divided by 0\n");
                break;

                default: printf ("You entered wrong choice \n");
                break ;

    }

    return 0;
}
