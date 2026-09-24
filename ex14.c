#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int age;
} Person;

int main(void){
    int n;
    printf("要存几个人?");
    scanf("%d", &n);

    Person *list = malloc(n * sizeof(Person));
    if (list == NULL){
        printf("分配失败\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("请输入第 %d 个人的姓名和年龄：", i + 1);
        scanf("%19s %d", list[i].name, &list[i].age);
    }

    printf("------ 通讯录 ------\n");
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", list[i].name, list[i].age);
        total += list[i].age;
    }
    printf("平均年龄：%.1f\n", (double)total / n);

    free(list);
    return 0;
}
