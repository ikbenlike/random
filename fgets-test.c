#include <stdio.h>
#include <string.h>

int main(void){
    char s[4];
    fgets(s, sizeof(s), stdin);
    printf("%s\n", s);
}
