#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    double fz = 2.0;
    double fm = 1.0;
    double tmp;

    for (int i = 0; i < n; i++)
    {
        sum += fz / fm;
        tmp = fz;
        fz += fm;
        fm = tmp;
    }

    printf("%.6f\n", sum);

    return 0;
}