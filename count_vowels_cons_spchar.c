#include <stdio.h>

int main()
{
    char str[200];
    int i,vowels=0,consonants=0,specialCharacters=0;

    printf ("Enter a string\n");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if ((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
        {
            consonants++;
        }
        else
        {
            specialCharacters++;
        }
    }

    printf ("\n Vowels = %d",vowels);
    printf ("\n Consonants = %d",consonants);
    printf ("\n Special characters = %d",specialCharacters);
    return 0;
}
