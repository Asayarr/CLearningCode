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
}

// ============================================================
//  以下先留空（stub），后面一个个来做
// ============================================================
void list_contacts(Contact *list, int count) {
    // TODO: 遍历打印
}

void find_contact(Contact *list, int count) {
    // TODO: 按名字查找（strcmp）
}

void delete_contact(Contact *list, int *count) {
    // TODO: 找到后把后面的元素往前挪，人数 -1
}
