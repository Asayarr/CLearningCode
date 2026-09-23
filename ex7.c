#include <stdio.h>
#include <string.h>

int main(void){
    char s[] = "hello";
    printf("%s\n", s);
    size_t len = strlen(s);

    printf("%zu\n", len);
    printf("%zu\n", sizeof(s));
    
    for (size_t i = 0; i < len; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}