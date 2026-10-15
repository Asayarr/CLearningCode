#include <stdio.h>
#include "contacts.h"

int main(void) {
    Contact list[MAX_CONTACTS];   // 联系人数组
    int count = 0;                // 当前人数

    int choice;
    while (1) {
        printf("\n===== 通讯录 =====\n");
        printf("1. 添加联系人\n");
        printf("2. 显示所有联系人\n");
        printf("3. 查找联系人\n");
        printf("4. 删除联系人\n");
        printf("5. 保存到文件\n");
        printf("6. 从文件加载\n");
        printf("0. 退出\n");
        printf("请选择：");

        if (scanf("%d", &choice) != 1) {
            break;                // 输入非数字就退出
        }

        switch (choice) {
            case 1: add_contact(list, &count);     break;
            case 2: list_contacts(list, count);    break;
            case 3: find_contact(list, count);     break;
            case 4: delete_contact(list, &count);  break;
            case 5: save_contacts(list, count);    break;
            case 6: load_contacts(list, &count);   break;
            case 0: printf("再见！\n"); return 0;
            default: printf("无效选择，请重新输入。\n");
        }
    }
    return 0;
}
