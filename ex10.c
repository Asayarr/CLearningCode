#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[50];
    double price;
    int pages;
} Book;

void b_print(Book *b){
    printf("%s %.1f %d\n", b->title, b->price, b->pages);
}

int main(void){
    Book b = {"C语言程序设计", 69.9, 250};
    b_print(&b);
    strcpy(b.title, "算法导论");
    b_print(&b);

    return 0;
}
