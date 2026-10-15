#include <stdio.h>
#include <string.h>
#include "contacts.h"

// ============================================================
//  这是你要填的第一个功能：添加联系人
//  提示：
//    1. 先判断是否已满：if (*count >= MAX_CONTACTS) { ... return; }
//    2. 提示输入，用 scanf 读姓名和电话
//       注意：*count 是当前人数，新联系人存在 list[*count]
//       读字符串不加 &，读普通变量要 &
//       姓名电话用 %19s 防止溢出
//    3. 存完后把人数 +1：(*count)++
// ============================================================
void add_contact(Contact *list, int *count) {
    // TODO: 你来写
    if(*count >= MAX_CONTACTS){
        printf("通讯录已满\n");
        return;
    }
    printf("请输入姓名和电话\n");
    scanf("%19s%19s", list[*count].name, list[*count].phone);
    (*count)++;
    printf("添加成功！\n");
}

// ============================================================
//  以下先留空（stub），后面一个个来做
// ============================================================
void list_contacts(Contact *list, int count) {
    // TODO: 遍历打印
    for (int i = 0; i < count; i++){
        printf("%d. %s  %s\n", i + 1, list [i].name, list[i].phone);
    }
}

void find_contact(Contact *list, int count) {
    // TODO: 按名字查找（strcmp）
    printf("请输入需要找的人:\n");
    char aimName[20];
    scanf("%19s", aimName);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(list[i].name, aimName) == 0)
        {
            printf("找到了：%d. %s  %s\n", i + 1 ,list[i].name, list[i].phone);
            return;
        }
    }
    printf("查无此人\n");
}

void delete_contact(Contact *list, int *count) {
    // TODO: 找到后把后面的元素往前挪，人数 -1
    char aimName[20];
    printf("请输入要删除的姓名:\n");
    scanf("%19s", aimName);

    for (int i = 0; i < *count; i++){
        if (strcmp(list[i].name, aimName) == 0)
        {
            for (int j = i + 1; j < *count; j++){
                list[j - 1] = list[j];
            }
            (*count)--;
            printf("删除成功\n");
            return;
        }
    }
    printf("查无此人\n");
}

// ============================================================
//  第 5 个功能：保存到文件
//  提示：
//    FILE *f = fopen("contacts.txt", "w");
//    先检查 f == NULL
//    循环 fprintf(f, "%s %s\n", list[i].name, list[i].phone);
//    最后 fclose(f);
// ============================================================
void save_contacts(Contact *list, int count) {
    // TODO: 你来写
    FILE *f = fopen("通讯录.txt", "w");
    if (f == NULL)
    {
        printf("打开失败\n");
        return;
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(f, "%s %s\n", list[i].name, list[i].phone);
    }
    fclose(f);
}

// ============================================================
//  第 6 个功能：从文件加载
//  提示：
//    先把 *count 清 0
//    fopen("contacts.txt", "r") → 检查 NULL
//    循环 fscanf 读进 list[*count]，每读一个 (*count)++
//    注意别超过 MAX_CONTACTS
//    fclose
// ============================================================
void load_contacts(Contact *list, int *count) {
    // TODO: 你来写
    *count = 0;
    FILE *f = fopen("通讯录.txt", "r");
    if(f == NULL){
        printf("文件不存在\n");
        return;
    }
    while(*count < MAX_CONTACTS && fscanf(f, "&19s %19s",list[*count].name, list[*count].phone) == 2){
        (*count)++;
    }
    fclose(f);
    printf("已加载 %d 条\n", *count);
}
