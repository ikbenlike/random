#include <stdio.h>

int strlen_s(char *str){
    int value;
    if (str != NULL) {
        int i;
        for (i = 0; str[i]; i++);
        value = i;
    } else {
        value = 0;
    }
    return value;
}

int main(void){
    char shit[] = "Hello World!";       // length of 12
    printf("%i\n", strlen_s(shit));
}
