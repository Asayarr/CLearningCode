#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} Point;

void move(Point *p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}

int main(void){
    Point p = {0, 0};
    printf("初始坐标：%d %d\n", p.x, p.y);
    move(&p, 5, 10);
    printf("移动后坐标：%d %d\n", p.x, p.y);

    return 0;
}