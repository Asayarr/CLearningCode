#include <stdio.h>

int main(void)
{
    int a = 100;
    int *p = &a;   // p 指向 a
    int **pp = &p; // pp 指向 p（二级指针）

    // 1) 打印值：都是 int，用 %d
    printf("a     = %d\n", a);
    printf("*p    = %d\n", *p);
    printf("**pp  = %d\n", **pp);

    // 2) 打印地址：都是指针，用 %p + (void*)
    printf("p     = %p\n", (void *)p);
    printf("*pp   = %p\n", (void *)*pp);

    // 3) 通过二级指针修改 a（解两层）
    **pp = 999;
    printf("--- 执行 **pp = 999 之后 ---\n");
    printf("a     = %d\n", a);
    printf("*p    = %d\n", *p);
    printf("**pp  = %d\n", **pp);

    *p = 1;
    printf("--- 执行 *p = 1 之后 ---\n");
    printf("a     = %d\n", a);
    printf("*p    = %d\n", *p);
    printf("**pp  = %d\n", **pp);

    return 0;
}
