#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    scanf("%s", str);

    for (int i = 0; i < 5; i++)
    {
        str[i] = str[i] + 4;
    }

    printf("password is %s\n", str);

    return 0;
}