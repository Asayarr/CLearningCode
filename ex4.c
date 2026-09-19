#include <stdio.h>
void square(int *n)
{
    *n = (*n) * (*n);
}

int square2(int n)
{
    int m = n * n;
    return m;
}

int square3(int n) { return n * n; }

int main(void)
{
    int a = 6;
    square(&a);
    printf("a的平方 = %d\n", a);

    int b = 7;
    square2(b);
    printf("b的平方 = %d\n", b);

    int c = 10;
    c = square3(c);
    printf("c的平方 = %d\n", c);

    return 0;
}