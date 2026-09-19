#include <stdio.h>

int main(void)
{
    int x = 5;
    int *p = &x;

    int a = 6;
    int b = a;
    printf("x的值是 %d\n", x);
    printf("a的值是 %d\n", a);
    printf("*p的值是 %d\n", *p);
    printf("b的值是 %d\n", b);

    x = 100;
    printf("x修改后的x值是 %d\n", x);
    printf("x修改后的*p值是 %d\n", *p);

    *p = 999;
    printf("*p修改后的x值是 %d\n", x);
    printf("*p修改后的*p值是 %d\n", *p);

    a = 1;
    printf("a修改后的a值是 %d\n", a);
    printf("a修改后的b值是 %d\n", b);

    b = 0;
    printf("b修改后的a值是 %d\n", a);
    printf("b修改后的b值是 %d\n", b);
    return 0;
}
