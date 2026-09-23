#include "myutils.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}