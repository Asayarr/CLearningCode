#include <stdio.h>

int main()
{
    int n;
    int matrix[10][10];
    int sum = 0;

    if (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matrix[i][j]);
                if (i >= j)
                {
                    sum += matrix[i][j];
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}