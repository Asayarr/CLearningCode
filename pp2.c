#include <stdio.h>
#include <stdlib.h>

void fill(int **pp, int n, int val){
    int *pp = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        pp[i] = val;
    }
}

int main(void){
    int *p = NULL;
    fill(&p, 5, 7);
    printf("%d\n", p);
    free(p);

    return 0;
}