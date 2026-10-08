#include <stdio.h>

int main()
{
    float pi = 3.14;
    float r;
    float h;
    scanf("%f%f", &r, &h);
    float s = (pi * 2 * r * h) + (2 * pi * r * r);
    float v = (pi * r * r * h);
    printf("%.3f %.3f\n", v, s);

    return 0;
}