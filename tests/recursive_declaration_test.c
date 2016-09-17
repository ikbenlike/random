/*  recursive struct declaration
*/
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct String_t;
struct String_t{
    char* content;
    int len;
    struct String_t* stuff;
};
typedef struct String_t String;

int main(void){
    String str;
    str.stuff = (struct String_t*)malloc(sizeof(struct String_t));
    str.stuff->content = NULL;
    str.stuff->content = strdup("hai world");
    str.stuff->len = 9;
    for(int i = 0; i < str.stuff->len; i++){
        printf("%c", str.stuff->content[i]);
    }
    puts("");
}
