#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char* str1 = "this is a string";
    char str2[strlen(str1)+1];

    for(int i = 0; i < strlen(str1); i++){
        if(i == 0){
            str2[i] = toupper(str1[i]);
        }
        else if(str1[i-1] == ' '){
            str2[i] = toupper(str1[i]);
        }
        else {
            str2[i] = str1[i];
        }
    }
    str2[strlen(str1)] = '\0';
    printf("original string: %s\n", str1);
    printf("modified string: %s\n", str2);
}
