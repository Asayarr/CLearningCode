#include <stdio.h>
int main(){
    FILE *f = fopen("nums.txt", "r");
    if (f == NULL){
        printf("打开失败\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), f) != NULL)
    {
        printf("%s", line);
    }
    return 0;
}