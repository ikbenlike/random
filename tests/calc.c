#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 64
#define INPUT_LENGTH 60

typedef struct {
    char* type;
    union Data {
        float afloat;
        int anint;
        char achar;
    } data;
} stack_item[STACK_SIZE];

int main(void){
    char res[INPUT_LENGTH];
    printf("calc> ");
    fflush(stdin);
    fgets(a, INPUT_LENGTH, stdin);
    for(int i = 0; i < strlen(res); i++){
        
    }
}
