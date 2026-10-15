#ifndef CONTACTS_H
#define CONTACTS_H

#define MAX_NAME     20
#define MAX_PHONE    20
#define MAX_CONTACTS 100

// 一条联系人
typedef struct {
    char name[MAX_NAME];
    char phone[MAX_PHONE];
} Contact;

// 函数声明
void add_contact(Contact *list, int *count);
void list_contacts(Contact *list, int count);
void find_contact(Contact *list, int count);
void delete_contact(Contact *list, int *count);
void save_contacts(Contact *list, int count);
void load_contacts(Contact *list, int *count);


#endif
