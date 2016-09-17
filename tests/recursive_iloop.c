/*  infinite looping mechanism using recursive functions
    breaking mechanism is broken as of now
*/
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int a = 0;

int plzstop(){
    exit(0);
    return 0;
}

int l_break(int (*stopPtr)()){
    (*stopPtr)();
    return 0;
}

int incrementInt(int (*stopPtr)()){
    if(a == 2147){
        //l_break(*stopPtr);
        exit(0);
    }
    a++;
    printf("%i\n", a);
    return 0;
}

int iloop_l(int (*functionPtr)(), int (*stopPtr)()){
    (*functionPtr)();
    iloop_l(*functionPtr, *stopPtr);
    return 0;
}

int main(void){
    int (*stopPtr)();
    stopPtr = &plzstop;
    int (*functionPtr)(int (*stopPtr)());
    functionPtr = &incrementInt;
    printf("%i\n", iloop_l(*functionPtr, *stopPtr));
}
