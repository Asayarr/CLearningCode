#include <stdio.h>
int main(void)
{
    int a, b;
    printf("输入两个整数（空格分隔）：");
    scanf("%d %d", &a, &b);
    printf("和 = %d\n", a + b);
    printf("差 = %d\n", a - b);
    printf("积 = %d\n", a * b);
    printf("商 = %d\n", a / b);

    return 0;
}