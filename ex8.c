#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("请输入你的名字：");
    scanf("%s", name);
    printf("你好, %s\n", name);
    printf("%zu\n", strlen(name));
    return 0;
}