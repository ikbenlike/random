#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *input(char *dest, unsigned long long size){
    int i = 0;
    while(1){
        dest[i] = getchar();
        if(i >= size){
            size += 20;
            dest = realloc(dest, size);
        }
        if(dest[i] == '\n'){
            dest[i] = '\0';
            break;
        }
        i++;
    }
    return dest;
}

int main(void){
    char *str = malloc(20 * sizeof(char));
    str = input(str, 20 * sizeof(char));
    return 0;
}
