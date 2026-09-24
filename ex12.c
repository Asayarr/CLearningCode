#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    double score;
} Student;

void print_all(Student *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%s ", arr[i].name);
    }
}

double average(Student *arr, int n){
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i].score;
    }
    return (ans / n);
}

int main(void){
    Student cls[3] = {
        {"张三", 18, 95.5},
        {"李四", 20, 88.0},
        {"王五", 19, 76.5},
    };
    print_all(cls, 3);
    printf("\n");
    printf("%.1f\n", average(cls, 3));

    return 0;
}
