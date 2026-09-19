#include <stdio.h>
void print_arr(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(void){

    int arr[5] = {10, 20, 30, 40, 50};
    printf("=========\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("=========\n");
    print_arr(arr, 5);

    printf("\n");
    return 0;
}