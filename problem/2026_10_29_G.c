#include <stdio.h>

int main()
{
    long long high1, low1, high2, low2;
    long long base = 1000000000000000LL;

    scanf("%15lld%15lld", &high1, &low1);
    scanf("%15lld%15lld", &high2, &low2);

    long long sum_low = low1 + low2;
    long long sum_high = high1 + high2;

    if (sum_low >= base)
    {
        sum_low -= base;
        sum_high += 1;
    }

    printf("%lld%015lld\n", sum_high, sum_low);

    return 0;
}