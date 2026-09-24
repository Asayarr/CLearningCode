#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));

    if (arr == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n");
    printf("%d\n", sum);

    free(arr);
    return 0;
}