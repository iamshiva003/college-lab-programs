// program to convert temperature in fahrenheit to celcius and celcius to fahrenheit

#include <stdio.h>

int main ()
{
    float fh, cl;
    printf ("Enter temperature in fahrenheit : \n");
    scanf ("%f", &fh);
    cl = (fh-32)/1.8;
    printf ("Temperature in celcius : %2f \n", cl);
    printf ("Enter temperature in celcius : \n");
    scanf ("%f", &cl);
    fh = (cl*1.8)+32;
    printf ("temperature in fahrenheit : %2f \n", fh);
    return 0;
}
