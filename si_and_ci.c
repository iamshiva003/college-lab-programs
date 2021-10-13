// program to calculate simple interest and compound interset

#include <stdio.h>
#include <math.h>

int main ()
{
    float principle, rate, time, si, ci;
    printf ("Enter principalamount, rate and time \n");
    scanf ("%f %f %f", &principle,&rate,&time);

    si = (principle*time*rate)/100;

    ci = principle*(pow(1+rate/100,time)-1);

    printf ("simple interest = %f \n", si);
    printf ("compound interest = %f \n", ci);
    return 0;
}
