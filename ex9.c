#include <stdio.h>
#include "myutils.h"

int main(void){
    int x = 3, y = 9;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y);

    printf("max = %d\n", max(x, y));
    return 0;
}