#include <stdio.h>
#include <stdlib.h>

void fill(int **pp, int n, int val){
    *pp = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        (*pp)[i] = val;
    }
}

int main(void){
    int *p = NULL;
    fill(&p, 5, 7);
    for (int i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);

    return 0;
}