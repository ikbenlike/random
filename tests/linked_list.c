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
    struct String_t* prev;
    struct String_t* next;
};
typedef struct String_t String;

int main(void){
    String str0;
    String str1;
    String str2;
    String str3;
    str0.prev = (struct String_t*)malloc(sizeof(struct String_t));
    str0.next = (struct String_t*)malloc(sizeof(struct String_t));
    str1.prev = (struct String_t*)malloc(sizeof(struct String_t));
    str1.next = (struct String_t*)malloc(sizeof(struct String_t));
    str2.prev = (struct String_t*)malloc(sizeof(struct String_t));
    str2.next = (struct String_t*)malloc(sizeof(struct String_t));
    str3.prev = (struct String_t*)malloc(sizeof(struct String_t));
    str3.next = (struct String_t*)malloc(sizeof(struct String_t));
    *str0.prev = str3;
    *str0.next = str1;
    *str1.prev = str0;
    *str1.next = str2;
    *str2.prev = str1;
    *str2.next = str3;
    *str3.prev = str2;
    *str3.next = str0;
    free(str0.prev);
    free(str0.next);
    free(str1.prev);
    free(str1.next);
    free(str2.prev);
    free(str2.next);
    free(str3.prev);
    free(str3.next);
    /*str.stuff->content = strdup("hai world");
    str.stuff->len = 9;
    for(int i = 0; i < str.stuff->len; i++){
        printf("%c", str.stuff->content[i]);
    }
    puts("");*/
}
