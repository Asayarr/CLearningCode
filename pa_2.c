#include <stdio.h>

int main(){
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = m;
    printf("%d\n", p[0][1]);
    printf("%d\n", p[1][2]);
    printf("%zu\n",sizeof(p));
    return 0;
}