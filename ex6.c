#include <stdio.h>
int sum(int *arr, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", sum(arr, 5));
}