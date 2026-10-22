#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++) printf("%d\n", *arr[i]);
    printf("%zu\n",sizeof(arr));

    printf("==========\n");

    int arry[3] = {a, b, c};
    for (int i = 0; i < 3; i++) printf("%d\n", arry[i]);
    printf("%zu\n", sizeof(arry));

    return 0;
}