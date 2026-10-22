#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main(void)
{
    // TODO 1: 用函数指针数组保存这 4 个函数
    //         int (*ops[4])(int, int) = { ... };
    int (*ops[4])(int, int) = {add, sub, mul, divide};

    // TODO 2: 提示用户选择 1.加 2.减 3.乘 4.除
    //         输入选择 choice 和两个数 x y
    int choice, x, y;
    printf("1.加 2.减 3.乘 4.除：");
    scanf("%d", &choice);
    printf("输入两个数：");
    scanf("%d %d", &x, &y);

    // TODO 3: 调用 ops[choice - 1](x, y)，打印结果
    printf("结果 = %d\n", ops[choice - 1](x, y));
    return 0;
}