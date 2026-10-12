#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    float x = -(3.0 * b - 5) / (2.0 * a);
    printf("%.1f\n", x);

    return 0;
}