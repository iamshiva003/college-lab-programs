// area to find area of triangle

#include <stdio.h>
#include <math.h>

int main()
{
    int s, a=10, b=20, c=30, area;
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf ("Area of triangle is = %d \n", area);
    return 0;

}
