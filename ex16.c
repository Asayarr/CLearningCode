#include <stdio.h>
typedef struct
{
    char name[20];
    int age;
} Person;

int main()
{
    Person p[3] = {
        {"张三", 18},
        {"李四", 19},
        {"王五", 20},
    };
    FILE *f = fopen("contacts.txt", "w");
    if (f == NULL)
    {
        printf("打开失败\n");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        fprintf(f, "%s %d\n", p[i].name, p[i].age);
    }
    fclose(f);

    f = fopen("contacts.txt", "r");
    char name[20];
    int age;
    while (fscanf(f, "%19s %d", name, &age) == 2)
    {
        printf("%s %d\n", name, age);
    }
    fclose(f);

    f = fopen("contacts.txt", "a");
    fprintf(f, "%s %d\n", "赵六", 30);
    fclose(f);
    printf("****************\n");

    f = fopen("contacts.txt", "r");
    while (fscanf(f, "%19s %d", name, &age) == 2)
    {
        printf("%s %d\n", name, age);
    }
    fclose(f);
    return 0;
}