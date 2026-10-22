#include <stdio.h>

// 练习1：把每个指针指向的值翻倍
void double_all(int *arr[], int n)
{
    // TODO: 遍历 n 个指针，把 *arr[i] 乘以 2
    for (int i = 0; i < n; i++){
        *arr[i] *= 2;
    }
}

// 练习2：数组指针 —— 二维数组求和
int sum_matrix(int (*m)[3], int rows)
{
    // TODO: 双重循环，累加 m[i][j]，返回总和
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++){
            sum += m[i][j];
        }
    }
    return sum;
}

int main(void)
{
    // 练习1
    int a = 1, b = 2, c = 3;
    int *ptrs[3] = {&a, &b, &c};
    double_all(ptrs, 3);
    printf("a=%d b=%d c=%d\n", a, b, c);

    // 练习2
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("sum = %d\n", sum_matrix(m, 2));

    return 0;
}