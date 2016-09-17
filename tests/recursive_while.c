/*  while loop implemented using recursive function calls
    no breaking mechanism as of now
*/
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addInt(int* a, int* b){
    printf("%i\n", *a);
    (*a)++;
    return 0;
}

int while_l(int* a, char* operand, int* b, int (*functionPtr)(int*, int*)){
    if(strcmp(operand, "==") == 0){
        if(*a == *b){
            (*functionPtr)(a, b);
            if(*a != *b){
                return 1;
            }
            while_l(a, operand, b, *functionPtr);
        }
        else{
            return 1;
        }
    }
    else if(strcmp(operand, ">=") == 0){
        if(*a >= *b){
            (*functionPtr)(a, b);
            if(*a < *b){
                return 1;
            }
            while_l(a, operand, b, *functionPtr);
        }
        else{
            return 1;
        }
    }
    else if(strcmp(operand, "<=") == 0){
        if(*a <= *b){
            (*functionPtr)(a, b);
            if(*a > *b){
                return 1;
            }
            while_l(a, operand, b, *functionPtr);
        }
        else {
            return 1;
        }
    }
    else if(strcmp(operand, ">") == 0){
        if(*a > *b){
            (*functionPtr)(a, b);
            if(*a <= *b){
                return 1;
            }
            while_l(a, operand, b, *functionPtr);
        }
        else {
            return 1;
        }
    }
    else if(strcmp(operand, "<") == 0){
        if(*a < *b){
            (*functionPtr)(a, b);
            if(*a >= *b){
                return 1;
            }
            while_l(a, operand, b, *functionPtr);
        }
        else {
            return 1;
        }
    }
    else{
        puts("ERROR: invalid operand");
        return 1;
    }
    return 0;
}

int main(void){
    int (*functionPtr)(int*, int*);
    functionPtr = &addInt;
    char operand[] = "<=";
    int* a = malloc(sizeof(int));
    int* b = malloc(sizeof(int));
    *a = -1;
    *b = 1;
    printf("%i\n", while_l(a, operand, b, *functionPtr));
    free(a);
    free(b);
}
