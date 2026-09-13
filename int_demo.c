#include <stdio.h>

int main(void){
    int a = 100;
    int b = 2147483647;
    printf("a= %d\n",a);

    printf("sizeof(int)  = %zu\n",sizeof(int));
    printf("sizeof(long) = %zu\n",sizeof(long));
    printf("sizeof(char) = %zu\n",sizeof(char));

    printf("b = %d\n", b);
    b = b + 1;
    printf("b + 1 = %d\n", b);

    return 0;
}
